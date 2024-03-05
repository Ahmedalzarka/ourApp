#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcomewindow.h"


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


void LoginWindow::on_pushButtonLogin_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    bool sucessful_login = false;
    for(int i = 0; i < usersCount; i++)
    {
        if (username == usernames[i] && password == passwords[i])
        {
            sucessful_login=true;
            Welcomewindow* welcomewindow = new Welcomewindow(username);
            welcomewindow->show();
            this->close();
        }
    }

    if(!sucessful_login)
        ui->error->setVisible(true);

}



