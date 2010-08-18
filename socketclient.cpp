#include "socketclient.h"

SocketClient::SocketClient()
{
    tcpSocket = new QTcpSocket(this);
    connect(tcpSocket, SIGNAL(connected()), this, SLOT(alertConnectionChanging()));
    connect(tcpSocket, SIGNAL(disconnected()), this, SLOT(alertConnectionChanging()));
    //connect(clientConnection, SIGNAL(disconnected()),clientConnection, SLOT(deleteLater()));
    connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),this, SLOT(getError(QAbstractSocket::SocketError)));
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readFromSock()) );

}

SocketClient::~SocketClient()
{
    tcpSocket->close();
    delete tcpSocket;
}

void SocketClient::connectSocket(QString address, int port)
{
    tcpSocket->abort();
    tcpSocket->connectToHost(address,port);
}

void SocketClient::disconnectSocket()
{
    tcpSocket->disconnectFromHost();
    tcpSocket->close();

}

void SocketClient::alertConnectionChanging()
{
    emit alertConnectionState(!(tcpSocket->state() == QAbstractSocket::UnconnectedState));
}

void SocketClient::getError(QAbstractSocket::SocketError socketError)
{
    QString * errormsg = new QString;
    switch (socketError){
        case QAbstractSocket::RemoteHostClosedError:
            errormsg->append("Remote host closed.");
            break;
        case QAbstractSocket::HostNotFoundError:
            errormsg->append("Remote not found.");
            break;
        case QAbstractSocket::ConnectionRefusedError:
            errormsg->append("Connection Refused.");
            break;
        default:
            errormsg->append(QString("The following error ocurred: %1.").arg(tcpSocket->errorString()));
    }
    emit sendConnectionError(*errormsg);
    delete errormsg;
}

void SocketClient::sendMessage(QString message)
{
    QByteArray *block = new QByteArray;
    block->append(message);
    tcpSocket->write(*block);
    delete block;
}

void SocketClient::readFromSock(){
    QByteArray *block = new QByteArray;
    block->append(tcpSocket->readAll());
    emit sendOutputText(QString(*block));
    delete block;
}
