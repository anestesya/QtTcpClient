#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H

#include <QTcpSocket>

class SocketClient: public QObject
{
    Q_OBJECT
public:
    SocketClient();
    ~SocketClient();
    void connectSocket(QString address, int port);
    void disconnectSocket();
    void sendMessage(QString message);

private:
    QTcpSocket *tcpSocket;

signals:
    void sendOutputText(QString text);
    void sendConnectionError(QString errormsg);
    void alertConnectionState(bool connected);

public slots:
    void alertConnectionChanging();
    void getError(QAbstractSocket::SocketError socketError);
    void readFromSock();

};

#endif // SOCKETCLIENT_H
