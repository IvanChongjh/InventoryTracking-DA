//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
//
#include "repairstation.h"
#include "ui_repairstation.h"

RepairStation::RepairStation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RepairStation)
{
    ui->setupUi(this);
}

RepairStation::~RepairStation()
{
    delete ui;
}

void RepairStation :: LoadRepairData()
{
    for(int i = 0 ; i < m_database->SizeOfDatabase(); i ++)
    {

        if(m_database->getDatabase()[i].getProgData().getProgrammer_Location() == "Repair")
        {
            if(m_database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9800")
                ui->h9800list->addItem("Type:" + QString::fromStdString(m_database->getDatabase()[i].getProgData().getProgrammer_Type()) +  " " + "SN:" +QString :: number (m_database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
            else
            {
                ui->h9600list->addItem("Type:" + QString::fromStdString(m_database->getDatabase()[i].getProgData().getProgrammer_Type()) +  " " + "SN:" +QString :: number (m_database->getDatabase()[i].getProgData().getGsfcAssetNumber()));

            }
        }

    }

}
void RepairStation :: SyncDatabase(Database &database)
{

    m_database = &database;
}
