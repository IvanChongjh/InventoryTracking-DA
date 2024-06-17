#ifndef INVENTORYTRACKER_H
#define INVENTORYTRACKER_H

#include <QMainWindow>
#include "secdialog.h"
#include "dataanalytics.h"
#include "sparestation.h"
#include "reviewstation.h"
#include "repairstation.h"
#include "activitylog.h"
#include "storageedit.h"
#include <Qtime>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "database.h"
#include "programmerinfo.h"
#include "wrappingdata.h"
#include "calibrationdate.h"

// using namespace std;

const std::string INPUT_FILENAME = "Database.txt";
const std::string OUTPUT_FILENAME = "ExportData.csv";

QT_BEGIN_NAMESPACE
namespace Ui {
class InventoryTracker;
}
QT_END_NAMESPACE

class InventoryTracker : public QMainWindow
{
    Q_OBJECT

public:
    InventoryTracker(QWidget *parent = nullptr);
    ~InventoryTracker();
    void loadDatabase();

private slots:


    void on_ViewBtn_clicked();

    void on_EditBtn_clicked();

    void on_searchBtn_clicked();

    int  locate_machineChecked();

    void on_storageEdit_clicked();

    void on_clearBtn_clicked();




    void on_dataanalysisBtn_clicked();



    void on_ActivityLogBtn_clicked();

private:
    Ui::InventoryTracker *ui;
    secdialog * secdialog;
    RepairStation * RepairStation;
    ReviewStation * ReviewStation;
    SpareStation * SpareStation;
    StorageEdit * StorageEdit;
    DataAnalytics * dataview;
    ActivityLog * log;
    Database  maindatabase;
    int machineno =0;
};
#endif // INVENTORYTRACKER_H
