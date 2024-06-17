#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include "Database.h"
#include "programmerinfo.h"
#include "calibrationdate.h"
#include "qlistwidget.h"
#include "wrappingdata.h"
#include <iostream>
#include <string>
#include <cctype>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

const std::string LogFile = "Log.csv";
const std::string TestNewDatabase = "testdatabase.txt";

namespace Ui {
class secdialog;
}

class secdialog : public QDialog
{
    Q_OBJECT

public:
    explicit secdialog(QWidget *parent = nullptr);
    ~secdialog();
    //secdialog(Database &data);
    // from inventory tracker
    int getMachineSelected();
    void setMachineSelected(int &machineno);
    void setDatabase(Database &data);
    void setProgrammerList();
    bool checkcompletion();

    // function to write to log for all options
    void ReplaceProg(int& progone,int &progtwo,std::string &reason);
    void AssignProg(int&prog,int &site);
    void InternalSwap(int& progone,int &progtwo, int &siteprog,int&siteprogtwo);
    void RemoveProg(int&Prog);

private slots:

    void on_programmerList_currentRowChanged(int currentRow);

    void setMachineView(int &site, int &gsfcasset);

    void on_sparelist_currentRowChanged(int currentRow);

    void on_reviewlist_currentRowChanged(int currentRow);

    void on_QuickSelectBtn_clicked();

    void on_submitChangeBtn_clicked();
    void reloadData();

    void clearAllList(); // wipe data on list

    void resetvariables();

    void on_Assign_clicked();

    void on_ListOptionBox_currentIndexChanged(int index);



private:
    Ui::secdialog *ui;

    Database *database;
    int m_machineSelected = 0;
    int selectedproglist = 0;
    int selectedReviewList = 0;
    int selectedSpareList = 0;
    bool trackreview = false;
    bool trackspare = false;
    bool completeassign = false;
    int option = 0 ;
};

#endif // SECDIALOG_H
