/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Welcomewindow
{
public:
    QLabel *label;
    QLabel *name;
    QLabel *img;
    QPushButton *pushButton;

    void setupUi(QDialog *Welcomewindow)
    {
        if (Welcomewindow->objectName().isEmpty())
            Welcomewindow->setObjectName("Welcomewindow");
        Welcomewindow->resize(400, 300);
        label = new QLabel(Welcomewindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 63, 20));
        name = new QLabel(Welcomewindow);
        name->setObjectName("name");
        name->setGeometry(QRect(60, 30, 63, 20));
        img = new QLabel(Welcomewindow);
        img->setObjectName("img");
        img->setGeometry(QRect(22, 69, 351, 171));
        pushButton = new QPushButton(Welcomewindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 250, 83, 29));

        retranslateUi(Welcomewindow);

        QMetaObject::connectSlotsByName(Welcomewindow);
    } // setupUi

    void retranslateUi(QDialog *Welcomewindow)
    {
        Welcomewindow->setWindowTitle(QCoreApplication::translate("Welcomewindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Welcomewindow", "Hello", nullptr));
        name->setText(QString());
        img->setText(QString());
        pushButton->setText(QCoreApplication::translate("Welcomewindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcomewindow: public Ui_Welcomewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
