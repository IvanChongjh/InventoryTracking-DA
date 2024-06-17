//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
//
#include "loginauthentication.h"
#include "ui_loginauthentication.h"

LoginAuthentication::LoginAuthentication(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginAuthentication)
{
    ui->setupUi(this);
    ui->notificationTxt->setText("");
}

LoginAuthentication::~LoginAuthentication()
{
    delete ui;
}

void LoginAuthentication::on_logInBtn_clicked()
{
    InventoryTracker = new class InventoryTracker(this); // assigns the ptr to a new object inventorytracker
    InventoryTracker->show();
    InventoryTracker->loadDatabase();
    this->hide();
}

