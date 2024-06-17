#ifndef LOGINAUTHENTICATION_H
#define LOGINAUTHENTICATION_H

#include "inventorytracker.h"
#include <QDialog>
namespace Ui {
class LoginAuthentication;
}

class LoginAuthentication : public QDialog
{
    Q_OBJECT

public:
    explicit LoginAuthentication(QWidget *parent = nullptr);
    ~LoginAuthentication();

private slots:
    void on_logInBtn_clicked();

private:
    Ui::LoginAuthentication *ui;
    InventoryTracker *InventoryTracker; // declaring ptr to InventoryTracker object
};

#endif // LOGINAUTHENTICATION_H
