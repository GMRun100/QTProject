#include "logindialog.h"
#include "ui_logindialog.h"
#include<QMessageBox>
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    //判断用户名密码是否正确
    //错误则弹出提示信息
    ui->pwdLineEdit->setEchoMode(QLineEdit::Password);   //将密码的显示更改为小黑点，
    if(ui->userLineEdit->text().trimmed()==tr("a")&&ui->pwdLineEdit->text().trimmed()==tr("1"))
    {
            accept();
    }
    else
    {
        QMessageBox::warning(this,"Warning",tr("user name or password error"),QMessageBox::Yes);
        ui->pwdLineEdit->clear();
        ui->userLineEdit->clear();
        ui->userLineEdit->setFocus();
    }
}
