//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
//
#include "reviewstation.h"
#include "ui_reviewstation.h"

ReviewStation::ReviewStation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ReviewStation)
{
    ui->setupUi(this);
}

ReviewStation::~ReviewStation()
{
    delete ui;
}

void ReviewStation :: LoadReviewData()
{
    for(int i = 0 ; i < m_database->SizeOfDatabase(); i ++)
    {

        if(m_database->getDatabase()[i].getProgData().getProgrammer_Location() == "Review")
        {
            if(m_database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9800")
            ui->reviewlist->addItem("Type:" + QString::fromStdString(m_database->getDatabase()[i].getProgData().getProgrammer_Type()) +  " " + "SN:" +QString :: number (m_database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
            else
            {
                ui->reviewList96->addItem("Type:" + QString::fromStdString(m_database->getDatabase()[i].getProgData().getProgrammer_Type()) +  " " + "SN:" +QString :: number (m_database->getDatabase()[i].getProgData().getGsfcAssetNumber()));

            }
        }

    }

}
void ReviewStation :: SyncDatabase(Database &database)
{

    m_database = &database;
 }
