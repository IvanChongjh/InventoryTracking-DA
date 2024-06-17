//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
//
#include "sparestation.h"
#include "ui_sparestation.h"

SpareStation::SpareStation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SpareStation)
{
    ui->setupUi(this);
}

SpareStation::~SpareStation()
{
    delete ui;
}

void SpareStation :: LoadRepairData()
{
    for(int i = 0 ; i < m_database->SizeOfDatabase(); i ++)
    {

        if(m_database->getDatabase()[i].getProgData().getProgrammer_Location() == "Spare")
        {
            if(m_database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9800")
                ui->h9800list->addItem("Type:" + QString::fromStdString(m_database->getDatabase()[i].getProgData().getProgrammer_Type()) +  " " + "SN:" +QString :: number (m_database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
            else
            {
                ui->H9600list->addItem("Type:" + QString::fromStdString(m_database->getDatabase()[i].getProgData().getProgrammer_Type()) +  " " + "SN:" +QString :: number (m_database->getDatabase()[i].getProgData().getGsfcAssetNumber()));

            }
        }

    }

}
void SpareStation :: SyncDatabase(Database &database)
{

    m_database = &database;
}
