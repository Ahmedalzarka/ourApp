#include "loginwindow.h"
#include "users.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    ui->error->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_3_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    bool flag = false;
    for(int i = 0; i < 100; i++)
    {
        if(usernames[i] == username && password == passwords[i])
        {
            flag = true;
            break;
        }
    }

    if(!flag)
        ui->error->setVisible(true);
}

