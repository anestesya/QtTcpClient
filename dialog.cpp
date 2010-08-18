#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    clientConnected = false;
    socketClient = new SocketClient;
    this->performConnections();

    ui->lnAdd->setText("localhost");
    ui->lnPort->setText("1234");
}

Dialog::~Dialog()
{
    delete ui;
    delete socketClient;
}

void Dialog::performConnections()
{
    connect(socketClient, SIGNAL(sendOutputText(QString)),this, SLOT(setOutputText(QString)));
    connect(socketClient, SIGNAL(alertConnectionState(bool)),this, SLOT(changeBtConnectState(bool)));
    connect(socketClient, SIGNAL(sendConnectionError(QString)),this, SLOT(displayConnectionError(QString)));

    connect(ui->btCon, SIGNAL(clicked(bool)),this, SLOT(tryConnection(bool)));
    connect(ui->btSend, SIGNAL(clicked(bool)),this, SLOT(sendMessage(bool)));
}

void Dialog::changeBtConnectState(bool connected)
{
    if (connected){
        ui->btCon->setText("Disconnect");
        ui->lnAdd->setEnabled(false);
        ui->lnPort->setEnabled(false);
        ui->txtOut->append("You are connected...");
    }
    else {
        ui->btCon->setText("Connect");
        ui->lnAdd->setEnabled(true);
        ui->lnPort->setEnabled(true);
        ui->txtOut->clear();        
    }
    this->clientConnected = connected;
}

void Dialog::setOutputText(QString text)
{
    ui->txtOut->append(text);
}


void Dialog::tryConnection(bool clicked)
{
    if (clientConnected) {
        socketClient->disconnectSocket();
    }
    else {
        socketClient->connectSocket(ui->lnAdd->text(),ui->lnPort->text().toInt());
    }
}

void Dialog::displayConnectionError(QString errormsg)
{
    QMessageBox::information(this, "Tcp Client", errormsg);
}

void Dialog::sendMessage(bool clicked)
{
    if (ui->lnSend->text().trimmed().size() != 0){
        ui->txtOut->append(QString("You say: %1").arg(ui->lnSend->text()));
        socketClient->sendMessage(ui->lnSend->text());
        ui->lnSend->clear();
    }

}

