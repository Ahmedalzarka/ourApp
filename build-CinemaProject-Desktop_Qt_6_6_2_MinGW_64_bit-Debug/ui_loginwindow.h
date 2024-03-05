/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label;
    QLabel *label_2;
    QLabel *error;
    QMenuBar *menubar;
    QMenu *menuLogin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(468, 402);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(242, 260, 111, 51));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(100, 260, 111, 51));
        username = new QLineEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(130, 50, 113, 28));
        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(130, 130, 113, 28));
        password->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 60, 81, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 130, 81, 20));
        error = new QLabel(centralwidget);
        error->setObjectName("error");
        error->setGeometry(QRect(40, 200, 261, 20));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 468, 25));
        menuLogin = new QMenu(menubar);
        menuLogin->setObjectName("menuLogin");
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        menubar->addAction(menuLogin->menuAction());

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        error->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">Error: worng username or password </span></p></body></html>", nullptr));
        menuLogin->setTitle(QCoreApplication::translate("LoginWindow", "Login ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
