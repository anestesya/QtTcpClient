#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "socketclient.h"

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    bool clientConnected;
    SocketClient *socketClient;
    void performConnections();

public slots:
    void changeBtConnectState(bool connected);
    void setOutputText(QString text);
    void displayConnectionError(QString errormsg);
    void tryConnection(bool clicked);
    void sendMessage(bool clicked);

};

#endif // DIALOG_H
