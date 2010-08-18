/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Wed 18. Aug 09:50:30 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *btCon;
    QPushButton *btSend;
    QLineEdit *lnSend;
    QTextEdit *txtOut;
    QLineEdit *lnAdd;
    QLineEdit *lnPort;
    QLabel *lbAdd;
    QLabel *lblOut;
    QLabel *lbPort;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(600, 400);
        btCon = new QPushButton(Dialog);
        btCon->setObjectName(QString::fromUtf8("btCon"));
        btCon->setGeometry(QRect(490, 110, 75, 23));
        btSend = new QPushButton(Dialog);
        btSend->setObjectName(QString::fromUtf8("btSend"));
        btSend->setGeometry(QRect(227, 310, 75, 23));
        lnSend = new QLineEdit(Dialog);
        lnSend->setObjectName(QString::fromUtf8("lnSend"));
        lnSend->setGeometry(QRect(49, 310, 161, 20));
        txtOut = new QTextEdit(Dialog);
        txtOut->setObjectName(QString::fromUtf8("txtOut"));
        txtOut->setGeometry(QRect(50, 30, 251, 271));
        lnAdd = new QLineEdit(Dialog);
        lnAdd->setObjectName(QString::fromUtf8("lnAdd"));
        lnAdd->setGeometry(QRect(360, 60, 201, 20));
        lnPort = new QLineEdit(Dialog);
        lnPort->setObjectName(QString::fromUtf8("lnPort"));
        lnPort->setGeometry(QRect(360, 110, 113, 20));
        lbAdd = new QLabel(Dialog);
        lbAdd->setObjectName(QString::fromUtf8("lbAdd"));
        lbAdd->setGeometry(QRect(360, 40, 46, 13));
        lblOut = new QLabel(Dialog);
        lblOut->setObjectName(QString::fromUtf8("lblOut"));
        lblOut->setGeometry(QRect(50, 10, 46, 13));
        lbPort = new QLabel(Dialog);
        lbPort->setObjectName(QString::fromUtf8("lbPort"));
        lbPort->setGeometry(QRect(360, 90, 46, 13));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        btCon->setText(QApplication::translate("Dialog", "Connect", 0, QApplication::UnicodeUTF8));
        btSend->setText(QApplication::translate("Dialog", "Send", 0, QApplication::UnicodeUTF8));
        lbAdd->setText(QApplication::translate("Dialog", "Address:", 0, QApplication::UnicodeUTF8));
        lblOut->setText(QApplication::translate("Dialog", "Output:", 0, QApplication::UnicodeUTF8));
        lbPort->setText(QApplication::translate("Dialog", "Port:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
