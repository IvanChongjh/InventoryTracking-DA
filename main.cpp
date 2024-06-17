
//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
// #include "inventorytracker.h"
#include "loginauthentication.h"
#include <QApplication>
#include "database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // InventoryTracker w;
    LoginAuthentication w;
    w.show();

    // Database db;

    // db.LoadDatabase();

    return a.exec();
}
