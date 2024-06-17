#include "activitylog.h"
#include "secdialog.h"
#include "ui_activitylog.h"

ActivityLog::ActivityLog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ActivityLog)
{
    ui->setupUi(this);
    data = new Database();
}

ActivityLog::~ActivityLog()
{
    delete ui;
}
void ActivityLog::SetDatabase(Database &database)
{
    data = &database;
}
void ActivityLog::SetActivityList()
{
    int i = 0 ; // counter
    std::string breakdown;
    std::ifstream inputLogFile(LogFile.c_str());
    if(inputLogFile.rdstate() == 0 )
    {

        while(getline(inputLogFile,breakdown))
         {

            ui->ActivityList->addItem(QString::number(i)+ "  " + QString::fromStdString(breakdown));
            i ++;

         }


    }



}
