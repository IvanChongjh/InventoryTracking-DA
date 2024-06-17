//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
//
#include "secdialog.h"
#include "ui_secdialog.h"

secdialog::secdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secdialog)
{
    database = new Database();
    ui->setupUi(this);
    ui->reviewtitle->setAlignment(Qt::AlignHCenter);
    ui->sparetitle->setAlignment(Qt::AlignHCenter);
    ui->notificationPanel->setText("Notifications on the latest 5 on H9800/H9600 programmers with issues for review station");
    ui->notificationPanel->setAlignment(Qt::AlignHCenter);
    ui->machineAssetTxt->setAlignment(Qt::AlignHCenter);
    ui->machineAssetTitle->setAlignment(Qt::AlignHCenter);
    ui->calibrationDateTxt->setAlignment(Qt::AlignHCenter);
    ui->QuickSelectBtn->setDisabled(true);
    ui->Assign->setDisabled(true);
    ui->submitChangeBtn->setDisabled(true);


    ui->site1->setStyleSheet("background-color : red");
    ui->site2->setStyleSheet("background-color : red");
    ui->site5->setStyleSheet("background-color : red");
    ui->site6->setStyleSheet("background-color : red");
    ui->site7->setStyleSheet("background-color : red");
    ui->site8->setStyleSheet("background-color : red");
    ui->site9->setStyleSheet("background-color : red");
    ui->site10->setStyleSheet("background-color : red");
    ui->site11->setStyleSheet("background-color : red");
    ui->site12->setStyleSheet("background-color : red");

}

secdialog::~secdialog()
{
    delete ui;
}

int secdialog::getMachineSelected()
{
    return m_machineSelected;
}
void secdialog::setMachineSelected(int &machineno)
{
    m_machineSelected = machineno;
     ui->machineAssetTxt->setText(QString::number(m_machineSelected));
}
void secdialog::setDatabase(Database &data)
{
    database = &data;

 }
void secdialog::setMachineView(int &site, int &gsfcasset)
 {



    if (m_machineSelected == 60015 || m_machineSelected == 60034 || m_machineSelected == 122455 || m_machineSelected == 60016 || m_machineSelected == 100023 || m_machineSelected == 60022 || m_machineSelected == 60032 || m_machineSelected == 60023 || m_machineSelected == 60033
         || m_machineSelected == 60006 || m_machineSelected ==60017 || m_machineSelected == 60005 || m_machineSelected == 134288 || m_machineSelected == 60000 || m_machineSelected == 60011 || m_machineSelected == 133929 || m_machineSelected == 133928)
     {
         // AP 600 MACHINE
        ui->MachineTitle->setText(" AP600 :" + QString::number(m_machineSelected));
         ui->site2->hide();
         ui->site2txt->hide();
         ui->site2label->hide();
        if(site == 1 )
        {
            ui->site1txt->setText("SN" +QString::number(gsfcasset));
               ui->site1->setStyleSheet("background-color : green");
        }
        if(site == 5 )
        {
            ui->site5txt->setText("SN" +QString::number(gsfcasset));
               ui->site5->setStyleSheet("background-color : green");
        }
        if(site == 6 )
        {
            ui->site6txt->setText("SN" +QString::number(gsfcasset));
               ui->site6->setStyleSheet("background-color : green");
        }
        if(site == 7 )
        {
            ui->site7txt->setText("SN" +QString::number(gsfcasset));
               ui->site7->setStyleSheet("background-color : green");
        }
        if(site == 8 )
        {
            ui->site8txt->setText("SN" +QString::number(gsfcasset));
               ui->site8->setStyleSheet("background-color : green");
        }
        if(site == 9 )
        {
            ui->site9txt->setText("SN" +QString::number(gsfcasset));
               ui->site9->setStyleSheet("background-color : green");
        }
        if(site == 10 )
        {
            ui->site10txt->setText("SN" +QString::number(gsfcasset));
               ui->site10->setStyleSheet("background-color : green");
        }
        if(site == 11 )
        {
            ui->site11txt->setText("SN" +QString::number(gsfcasset));
               ui->site11->setStyleSheet("background-color : green");
        }
        if(site == 12 )
        {
            ui->site12txt->setText("SN" +QString::number(gsfcasset));
               ui->site12->setStyleSheet("background-color : green");
        }

     }
    else if (m_machineSelected == 124524 || m_machineSelected == 124540)
    {
        // special case this two machine got site 2 for ap600
        ui->site5->hide();
        ui->site5txt->hide();
        ui->site5label->hide();


        ui->MachineTitle->setText(" AP600 :" + QString::number(m_machineSelected));
        if(site == 1 )
        {
            ui->site1txt->setText("SN" +QString::number(gsfcasset));
            ui->site1->setStyleSheet("background-color : green");
        }
        if(site == 2 )
        {
            ui->site2txt->setText("SN" +QString::number(gsfcasset));
            ui->site2->setStyleSheet("background-color : green");
        }
        if(site == 6 )
        {
            ui->site6txt->setText("SN" +QString::number(gsfcasset));
            ui->site6->setStyleSheet("background-color : green");
        }
        if(site == 7 )
        {
            ui->site7txt->setText("SN" +QString::number(gsfcasset));
            ui->site7->setStyleSheet("background-color : green");
        }
        if(site == 8 )
        {
            ui->site8txt->setText("SN" +QString::number(gsfcasset));
            ui->site8->setStyleSheet("background-color : green");
        }
        if(site == 9 )
        {
            ui->site9txt->setText("SN" +QString::number(gsfcasset));
            ui->site9->setStyleSheet("background-color : green");
        }
        if(site == 10 )
        {
            ui->site10txt->setText("SN" +QString::number(gsfcasset));
            ui->site10->setStyleSheet("background-color : green");
        }
        if(site == 11 )
        {
            ui->site11txt->setText("SN" +QString::number(gsfcasset));
            ui->site11->setStyleSheet("background-color : green");
        }
        if(site == 12 )
        {
            ui->site12txt->setText("SN" +QString::number(gsfcasset));
            ui->site12->setStyleSheet("background-color : green");
        }

    }
    else if ( m_machineSelected == 60051 || m_machineSelected == 60046 || m_machineSelected == 60047 || m_machineSelected == 60053 || m_machineSelected == 60054 || m_machineSelected == 60044 || m_machineSelected == 60055 || m_machineSelected == 127028)
    {
        // AP900 change layout
        // remove site 1 , site 5, site 9,site 8,site 12
        // set visuals
        // show 6 , show 10,show 7 ,show 11
        // site 5 , site 6 , site 7, site 10 , site 11 will represent 1,2,5,6
        ui->MachineTitle->setText(" AP900 :" + QString::number(m_machineSelected));
        ui->site1->hide();
        ui->site1txt->hide();
        ui->site1label->hide();

        ui->site2->hide();
        ui->site2txt->hide();
        ui->site2label->hide();

        ui->site5->hide();
        ui->site5txt->hide();
        ui->site5label->hide();

        ui->site9->hide();
        ui->site9txt->hide();
        ui->site9label->hide();

        ui->site8->hide();
        ui->site8txt->hide();
        ui->site8label->hide();

        ui->site12->hide();
        ui->site12txt->hide();
        ui->site12label->hide();

        ui->site6label->setText("Site 1"); // represent number site 1
        ui->site7label->setText("Site 2"); // represent 2
        ui->site10label->setText("Site 3"); // site 3
        ui->site11label->setText("Site 4"); // site 4

        if(site == 1 )
        {
            ui->site6txt->setText("SN" +QString::number(gsfcasset));
               ui->site6->setStyleSheet("background-color : green");
        }
        if(site == 2 )
        {
            ui->site7txt->setText("SN" +QString::number(gsfcasset));
               ui->site7->setStyleSheet("background-color : green");
        }
        if(site == 3 )
        {
            ui->site10txt->setText("SN" +QString::number(gsfcasset));
               ui->site10->setStyleSheet("background-color : green");
        }
        if(site == 4 )
        {
            ui->site11txt->setText("SN" +QString::number(gsfcasset));
            ui->site11->setStyleSheet("background-color : green");
        }

    }
     else if (m_machineSelected == 136268 || m_machineSelected == 128259 || m_machineSelected == 136269 || m_machineSelected == 134119)
     {
         // AP 720
         ui->MachineTitle->setText(" AP720 :" + QString::number(m_machineSelected));
         ui->site1->hide();
         ui->site1txt->hide();
         ui->site1label->hide();

         ui->site2->hide();
         ui->site2txt->hide();
         ui->site2label->hide();

         ui->site9->hide();
         ui->site9txt->hide();
         ui->site9label->hide();

         ui->site10->hide();
         ui->site10txt->hide();
         ui->site10label->hide();

         ui->site11->hide();
         ui->site11txt->hide();
         ui->site11label->hide();

         ui->site12->hide();
         ui->site12txt->hide();
         ui->site12label->hide();

         ui->site5label->setText("Site 5"); // represent number site 1
         ui->site6label->setText("Site 6"); // represent 2
         ui->site7label->setText("Site 7"); // site 3
         ui->site8label->setText("Site 8"); // site 4



         if(site == 1 )
         {
             ui->site5txt->setText("SN" +QString::number(gsfcasset));
               ui->site5->setStyleSheet("background-color : green");
         }
         if(site == 2 )
         {
             ui->site6txt->setText("SN" +QString::number(gsfcasset));
             ui->site6->setStyleSheet("background-color : green");
         }
         if(site == 3 )
         {
             ui->site7txt->setText("SN" +QString::number(gsfcasset));
             ui->site7->setStyleSheet("background-color : green");
         }
         if(site == 4 )
         {
             ui->site8txt->setText("SN" +QString::number(gsfcasset));
             ui->site8->setStyleSheet("background-color : green");
         }


    }
    else if(m_machineSelected == 132520 || m_machineSelected == 133091 || m_machineSelected == 132539 || m_machineSelected == 135629 || m_machineSelected == 134118)
    {
        // AP710
        ui->MachineTitle->setText(" AP710 :" + QString::number(m_machineSelected));
        ui->site1->hide();
        ui->site1txt->hide();
        ui->site1label->hide();

        ui->site2->hide();
        ui->site2txt->hide();
        ui->site2label->hide();

        ui->site5->hide();
        ui->site5txt->hide();
        ui->site5label->hide();

        ui->site9->hide();
        ui->site9txt->hide();
        ui->site9label->hide();

        ui->site8->hide();
        ui->site8txt->hide();
        ui->site8label->hide();

        ui->site12->hide();
        ui->site12txt->hide();
        ui->site12label->hide();

        ui->site6label->setText("Site 5"); // represent number site 1
        ui->site7label->setText("Site 6"); // represent 2
        ui->site10label->setText("Site 7"); // site 3
        ui->site11label->setText("Site 8"); // site 4



        if(site == 5 )
        {
            ui->site6txt->setText("SN" +QString::number(gsfcasset));
            ui->site6->setStyleSheet("background-color : green");
        }
        if(site == 6 )
        {
            ui->site7txt->setText("SN" +QString::number(gsfcasset));
            ui->site7->setStyleSheet("background-color : green");
        }
        if(site == 7 )
        {
            ui->site10txt->setText("SN" +QString::number(gsfcasset));
            ui->site10->setStyleSheet("background-color : green");
        }
        if(site ==8 )
        {
            ui->site11txt->setText("SN" +QString::number(gsfcasset));
            ui->site11->setStyleSheet("background-color : green");
        }
    }else
    {
        // AP 700
        ui->MachineTitle->setText(" AP700 :" + QString::number(m_machineSelected));
        ui->site1->hide();
        ui->site1txt->hide();
        ui->site1label->hide();

        ui->site2->hide();
        ui->site2txt->hide();
        ui->site2label->hide();

        ui->site5->hide();
        ui->site5txt->hide();
        ui->site5label->hide();

        ui->site9->hide();
        ui->site9txt->hide();
        ui->site9label->hide();

        ui->site8->hide();
        ui->site8txt->hide();
        ui->site8label->hide();

        ui->site12->hide();
        ui->site12txt->hide();
        ui->site12label->hide();

        ui->site6label->setText("Site 5"); // represent number site 1
        ui->site7label->setText("Site 6"); // represent 2
        ui->site10label->setText("Site 7"); // site 3
        ui->site11label->setText("Site 8"); // site 4



        if(site == 5 )
        {
            ui->site6txt->setText("SN" +QString::number(gsfcasset));
            ui->site6->setStyleSheet("background-color : green");

        }
        if(site == 6 )
        {
            ui->site7txt->setText("SN" +QString::number(gsfcasset));
            ui->site7->setStyleSheet("background-color : green");
        }
        if(site == 7 )
        {
            ui->site10txt->setText("SN" +QString::number(gsfcasset));
            ui->site10->setStyleSheet("background-color : green");
        }
        if(site == 8 )
        {
            ui->site11txt->setText("SN" +QString::number(gsfcasset));
            ui->site11->setStyleSheet("background-color : green");
        }
    }


}
void secdialog:: setProgrammerList()
 {
    int algocheck = 0; // number of total same type programmer assigned
     std::string type ;
    if (database->SizeOfDatabase() != 0)
     {
        // std::cout << database.SizeOfDatabase() << std::endl;

        for(int i = 0 ; i < database->SizeOfDatabase(); i ++ )
         {

            if (isdigit(database->getDatabase()[i].getProgData().getProgrammer_Location()[0]) == true ) // check if digit or not ie H9800 OR MACHINE NUMBER
             {
                if(m_machineSelected == stoi(database->getDatabase()[i].getProgData().getProgrammer_Location()))
                 { // error cause you are comparing machine selected example 1 to location MANUAL
                    // std::cout << "located " << std::endl;
                    ui->programmerList->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) + "    " + "SN:" +QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()) + "      " + "Site:" + QString::number (database->getDatabase()[i].getProgData().getMachinesite()));
                    int site = database->getDatabase()[i].getProgData().getMachinesite();
                    int asset = database->getDatabase()[i].getProgData().getGsfcAssetNumber();
                    setMachineView(site,asset);
                    type = database->getDatabase()[i].getProgData().getProgrammer_Type();
                     algocheck ++;

                }

            } else if(database->getDatabase()[i].getProgData().getProgrammer_Location()=="Repair")
             {
                ui->repairlist->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) + "    " + "SN:" +QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
             }
            else if (database->getDatabase()[i].getProgData().getProgrammer_Location()== "Manual")
             {
                if(m_machineSelected == database->getDatabase()[i].getProgData().getMachinesite())
                 {
                     ui->programmerList->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) + "    " + "SN:" +QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()) + " " );
                    type = database->getDatabase()[i].getProgData().getProgrammer_Type();
                 }
             }

         }
          //load review and spare

         if (type == "H9800")
         {
             ui->sparetitle->setText("H9800 Spare Station");
             ui->reviewtitle->setText("H9800 Review Station");
             for(int i = 0 ; i < database->SizeOfDatabase();i++)
             {
                 if(database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9800" && database->getDatabase()[i].getProgData().getProgrammer_Location()=="Review")
                 {
                     ui->reviewlist->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) +  "     " + "SN:"+QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
                 }
                 else if ( database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9800" && database->getDatabase()[i].getProgData().getProgrammer_Location()=="Spare")
                     ui->sparelist->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) +  "     " + "SN:"+QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
             }
          }
         else if (type == "H9600")
         {
             ui->sparetitle->setText("H9600 Spare Station");
             ui->reviewtitle->setText("H9600 Review Station");


             for(int i = 0 ; i < database->SizeOfDatabase();i++)
             {

                 if(database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9600" && database->getDatabase()[i].getProgData().getProgrammer_Location()=="Review")
                 {
                     ui->reviewlist->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) +  "    " + "SN:" +QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
                 }
                 else if ( database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9600" && database->getDatabase()[i].getProgData().getProgrammer_Location()=="Spare")
                     ui->sparelist->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) +  "    " + "SN:"+QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
             }
         }



         }




}


void secdialog::reloadData()
{
    int algocheck = 0; // number of total same type programmer assigned
    std::string type;
    if (database->SizeOfDatabase() != 0)
    {
        for(int i = 0 ; i < database->SizeOfDatabase(); i ++ )
        {

            if (isdigit(database->getDatabase()[i].getProgData().getProgrammer_Location()[0]) == true) // check if digit or not ie H9800 OR MACHINE NUMBER
            {
                if(m_machineSelected == stoi(database->getDatabase()[i].getProgData().getProgrammer_Location()))
                {

                    ui->programmerList->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) + "     " + "SN:" +QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()) + " " + "Site:" + QString::number (database->getDatabase()[i].getProgData().getMachinesite()));
                    type = database->getDatabase()[i].getProgData().getProgrammer_Type();
                    int site = database->getDatabase()[i].getProgData().getMachinesite();
                    int asset = database->getDatabase()[i].getProgData().getGsfcAssetNumber();
                    setMachineView(site,asset);
                    algocheck ++;

                }



            } else if(database->getDatabase()[i].getProgData().getProgrammer_Location()=="Repair")
            {
                ui->repairlist->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) + "     " + "SN:" +QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
            }

        }
        //load review and spare

        if (type == "H9800")
        {
            ui->sparetitle->setText("H9800 Spare Station");
            ui->reviewtitle->setText("H9800 Review Station");
            for(int i = 0 ; i < database->SizeOfDatabase();i++)
            {
                if(database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9800" && database->getDatabase()[i].getProgData().getProgrammer_Location()=="Review")
                {
                    ui->reviewlist->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) +  "     " + "SN:"+QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
                }
                else if ( database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9800" && database->getDatabase()[i].getProgData().getProgrammer_Location()=="Spare")
                    ui->sparelist->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) +  "     " + "SN:"+QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
            }
        }
        else if (type == "H9600")
        {
            ui->sparetitle->setText("H9600 Spare Station");
            ui->reviewtitle->setText("H9600 Review Station");


            for(int i = 0 ; i < database->SizeOfDatabase();i++)
            {

                if(database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9600" && database->getDatabase()[i].getProgData().getProgrammer_Location()=="Review")
                {
                    ui->reviewlist->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) +  "     " + "SN:" +QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
                }
                else if ( database->getDatabase()[i].getProgData().getProgrammer_Type() == "H9600" && database->getDatabase()[i].getProgData().getProgrammer_Location()=="Spare")
                    ui->sparelist->addItem("Type:" + QString::fromStdString(database->getDatabase()[i].getProgData().getProgrammer_Type()) +  "     " + "SN:"+QString :: number (database->getDatabase()[i].getProgData().getGsfcAssetNumber()));
            }
        }


    }

}

void secdialog::on_programmerList_currentRowChanged(int currentRow)
{
    selectedproglist = currentRow;
   // cout << "This is Selected From Programmer List : index " << currentRow  << endl;

}



void secdialog::on_sparelist_currentRowChanged(int currentRow)
{
    selectedSpareList = currentRow;
    //cout << "This is selected for Spare list : index " << selectedSpareList << endl;
    trackspare = true;



}


void secdialog::on_reviewlist_currentRowChanged(int currentRow)
{
    selectedReviewList = currentRow;
  //  cout << "This is selected for review list : index " << selectedReviewList << endl;
    trackreview = true;

}


void secdialog::on_QuickSelectBtn_clicked()
{

    // this is for programmers in machine
    QListWidgetItem * ptr ; // ptr
    ptr = ui->programmerList->takeItem(selectedproglist); // point to object in list
    std::string x = ptr->text().toStdString();
    // cout << "Entire Text "  << x << endl;
    std::stringstream breakdown(x);
    std::string type;
    std::string serial;
    getline(breakdown,type,' '); // type
    //cout << " For Type "<< type << endl;
    getline(breakdown,serial,' ');
    // cout << " Hello here  " << serial << endl;
    std::stringstream sn(serial);
    std::string snbd;
    getline(sn,snbd,':');
    getline(sn,snbd,' '); // so the serial number selected is here
    //cout << " SN" << snbd << endl;
    QString xt = QString::fromStdString(snbd);
    ui->progsnTxt->setText(xt);
        // this will break the string text from the list into smaller parts
        // after breakdown it we will use the text listed to make changes to specific obj
        // location example


    // ptr takes object out from widgetlist and remove it from list
    // now object is at ptr
    // idea is to convet the list string and place it at txt area for SN



    // this is for programmers in review

    QListWidgetItem * rvptr ; // ptr
    rvptr = ui->reviewlist->takeItem(selectedReviewList); // point to object in list
    QListWidgetItem * rvpts ; // ptr
    rvpts = ui->sparelist->takeItem(selectedSpareList); // point to object in list
    if (trackreview == true && trackspare == false ){
        //review list
        std::string xr = rvptr->text().toStdString();
        // cout << "Entire Reivew Text "  << xr << endl;
        std::stringstream breakdownr(xr);
        std::string typer;
        std::string serialr;
        getline(breakdownr,typer,' '); // type
        // cout << " For Type "<< typer << endl;
        getline(breakdownr,serialr,' ');
        // cout << " Hello here  " << serialr << endl;
        std::stringstream snr(serialr);
        std::string snbdr;
        getline(snr,snbdr,':');
        getline(snr,snbdr,' '); // so the serial number selected is here
        // cout << " SN" << snbdr << endl;
        QString xtr = QString::fromStdString(snbdr);
        ui->newprogTxt->setText(xtr);
    }else if (trackreview== false && trackspare == true)
    {
        // spare list
        std::string xs = rvpts->text().toStdString();
        // cout << "Entire Spare Text "  << xs << endl;
        std::stringstream breakdowns(xs);
        std::string types;
        std::string serials;
        getline(breakdowns,types,' '); // type
        //cout << " For Type "<< types << endl;
        getline(breakdowns,serials,' ');
        // cout << " Hello here  " << serials << endl;
        std::stringstream sns(serials);
        std::string snbds;
        getline(sns,snbds,':');
        getline(sns,snbds,' '); // so the serial number selected is here
        //cout << " SN" << snbds << endl;
        QString xts = QString::fromStdString(snbds);
        ui->newprogTxt->setText(xts);
    }
    else if ( trackreview == true && trackspare == true)
    {

        ui->notificationPanel->setText(" You cannot select two items Review List and Spare list, Please try again ! ");
        clearAllList();
        ui->progsnTxt->setText("");
        ui->newprogTxt->setText("");

    }
    else
    {
        ui->notificationPanel->setText(" Please select a replacement programmer from Spare/Review station");
    }
    // cout << " Track List : "  <<tracklist << endl;
    clearAllList();
    resetvariables();
   // reloadData();
}


void secdialog::on_submitChangeBtn_clicked()
{
    std::ofstream outputdatabase(TestNewDatabase);

   completeassign = true;
   // overwrite existing data
   outputdatabase<< "Programmer_S/N,Programmer_Type,GSFC,Last_Calibration_Date,Location,Site,Reason,Date_Reported," << std::endl;
   for ( int i = 0 ; i < database->SizeOfDatabase() ; i ++ )
   {
       outputdatabase << database->getDatabase()[i].getProgData().getProgrammer_SN() <<","<< database->getDatabase()[i].getProgData().getProgrammer_Type() << "," << database->getDatabase()[i].getProgData().getGsfcAssetNumber() << "," << database->getDatabase()[i].getDateData().getDay() << "/" << database->getDatabase()[i].getDateData().getMonth()<<"/" << database->getDatabase()[i].getDateData().getYear() << ","
                      << database->getDatabase()[i].getProgData().getProgrammer_Location()<<","<<database->getDatabase()[i].getProgData().getMachinesite() << "," << database->getDatabase()[i].getProgData().getProgissues() << "," << database->getDatabase()[i].getProgData().getDateOfReport()<<","<<std::endl;
   }

   outputdatabase.close();
}

void secdialog::clearAllList()
{

    ui->programmerList->clear();
    ui->sparelist->clear();
    ui->reviewlist->clear();
    ui->repairlist->clear();


 }
void secdialog::resetvariables()
 {

    trackreview = false;
    trackspare = false;
}



bool secdialog::checkcompletion()
{
    return completeassign;

}

void secdialog::ReplaceProg(int& progone,int &progtwo,std::string &reason)
{
    std::ofstream outputfile(LogFile,std::ios::app);

    outputfile << "User : Ivan Chong has made a request to replace programmer SN:" << progone << " With Programmer SN:" << progtwo
               << " From Machine :" << m_machineSelected << " Reason : " << reason << std::endl;
    outputfile.close();
}
void secdialog::AssignProg(int&prog,int &site)
{
    std::ofstream outputfile(LogFile,std::ios::app);
    outputfile << "User : Ivan Chong has made a request to Assign programmer SN:" << prog << " At Site : " << site
               << " From Machine :" << m_machineSelected << std::endl;
    outputfile.close();

}
void secdialog::InternalSwap(int& progone,int &progtwo, int &siteprog,int&siteprogtwo)
{

}
void secdialog::RemoveProg(int&Prog)
{

}

void secdialog::on_Assign_clicked()
{
    // change spoiled programmer variables
    int proglist =ui->progsnTxt->text().toInt(); // prog in machine
    int progchange = ui->newprogTxt->text().toInt(); // new prog to replace
    int progsite = 0;
    std::string reason = ui->changingTxt->text().toStdString();
    // internal swap variables
    int progOne = ui->progsnTxt->text().toInt();
    int progTwo = ui->newprogTxt->text().toInt();
    int progOneSite  = 0;
    int progTwoSite = 0 ;
    int index  = -1 ;
    int indextwo = -1 ;

    // assigning programmer to slot
    int assignprog = ui->progsnTxt->text().toInt();
    int progselect = ui->siteBox->text().toInt();

    // removing prog;
    int removeprog = assignprog;
    // write a write out function to log all the changes made to the machine etc

    switch(option)
    {
    case 0 : // default view
        break;
    case 1 : // replacing programmer
        ReplaceProg(proglist,progchange,reason);
        for(int i = 0 ; i < database->SizeOfDatabase(); i ++)
        {

            if(database->getDatabase()[i].getProgData().getGsfcAssetNumber() == proglist)
            {

                //  cout << " Programmer To Be Changed old  : " << proglist << endl;
                // cout <<  " before " <<  database.getDatabase()[i].getProgData().getProgrammer_Location() << endl;
                database->getDatabase()[i].getProgData().setProgrammer_Location("Review");
                // cout <<   "After "  <<  database.getDatabase()[i].getProgData().getProgrammer_Location() << endl;

                //  cout << "hello here " << endl;
                progsite = database->getDatabase()[i].getProgData().getMachinesite();
               // std::cout << " first Site Number : " << progsite << std::endl;
                // set reason for changing and change site to 0
                database->getDatabase()[i].getProgData().setMachinesite(0);
                database->getDatabase()[i].getProgData().setProgissues(reason);

            }


        }

        for (int i = 0 ; i < database->SizeOfDatabase(); i ++ )
        {
            if (database->getDatabase()[i].getProgData().getGsfcAssetNumber() == progchange)
            {
                std::string x = std::to_string(m_machineSelected); // get machine number selected
                // cout << " Programmer To Be Changed new : " << progchange << endl;
                database->getDatabase()[i].getProgData().setProgrammer_Location(x); // set new prog location
                // cout <<  " Site Number : " << progsite << endl;
                database->getDatabase()[i].getProgData().setMachinesite(progsite); // set site

            }
        }

        clearAllList();
        reloadData();
        ui->progsnTxt->setText("");
        ui->newprogTxt->setText("");
        break;

    case 2 : // assigning programmer
        AssignProg(assignprog,progselect);
        for (int i = 0 ; i < database->SizeOfDatabase(); i ++ )
        {
            if(assignprog == database->getDatabase()[i].getProgData().getGsfcAssetNumber())
            {
                std::string assignprg = std::to_string(m_machineSelected);
                database->getDatabase()[i].getProgData().setProgrammer_Location(assignprg);
                database->getDatabase()[i].getProgData().setMachinesite(progselect);

            }
        }
        clearAllList();
        reloadData();

        break;
    case 3 : // internal swap
        for (int i = 0 ; i < database->SizeOfDatabase() ; i ++ )
        {
            if (progOne == database->getDatabase()[i].getProgData().getGsfcAssetNumber())
            {
                //cout << "Hello Here " <<  database.getDatabase()[i].getProgData().getProgrammer_SN() << endl;
                // id of first prog
                progOneSite = database->getDatabase()[i].getProgData().getMachinesite();
                index = i;

            }
            else if (progTwo == database->getDatabase()[i].getProgData().getGsfcAssetNumber())
            {
                progTwoSite = database->getDatabase()[i].getProgData().getMachinesite();
                indextwo = i;
               // cout << " Hello Here " << database.getDatabase()[i].getProgData().getProgrammer_SN() << endl;

            }


        }

        if ( index != -1 && indextwo != -1)
        {
            database->getDatabase()[index].getProgData().setMachinesite(progTwoSite);
            database->getDatabase()[indextwo].getProgData().setMachinesite(progOneSite);

        }
        else{
            if (index == -1)
            {
                ui->notificationPanel->setText("Programmer :" + QString::number(progOne) + " You have entered is not found !");
            }
            else if (indextwo == -1)
            {
                ui->notificationPanel->setText("Programmer :" + QString::number(progTwo) + " You have entered is not found !");
            }

        }
        clearAllList();
        reloadData();

        break;
    case 4 : // remove programmer
        for (int i = 0 ; i < database->SizeOfDatabase(); i ++ )
        {
            if(removeprog == database->getDatabase()[i].getProgData().getGsfcAssetNumber())
            {

                database->getDatabase()[i].getProgData().setProgrammer_Location("Review");
                database->getDatabase()[i].getProgData().setMachinesite(0);
                database->getDatabase()[i].getProgData().setProgissues(reason);

            }
        }
        clearAllList();
        reloadData();
        break;
    }

}


void secdialog::on_ListOptionBox_currentIndexChanged(int index)
{

    // include switch case here base on index user selected
   // cout << " Hello here " << index << endl;

    option = index;
    // write a switch case to change the layout of the text containers based on need

    if(index > 0 )
    {
       // cout << "hello here " << endl;
        ui->QuickSelectBtn->setDisabled(false);
        ui->Assign->setDisabled(false);
        ui->submitChangeBtn->setDisabled(false);

    }

        switch(index)
        {
        case 0: // default view
            ui->progsnTitle->show();
            ui->progsnTxt->show();
            ui->newprogTitle->show();
            ui->newprogTxt->show();
            ui->siteTitle->show();
            ui->siteBox->show();
            ui->socketTitle->show();
            ui->socketsnTitle->show();
            ui->socketsnTxt->show();
            ui->sockettypetxt->show();
            break;

        case 1: // case 1 is Replacement of programmer
            ui->progsnTxt->show();
            ui->progsnTitle->setText("Spoiled Programmer :");
            ui->progsnTitle->show();

            ui->newprogTitle->setText("Review/Spare Programmer :");
            ui->newprogTitle->show();
            ui->newprogTxt->show();

            ui->socketTitle->show();
            ui->sockettypetxt->show();
            ui->socketsnTitle->show();
            ui->socketsnTxt->show();

            ui->siteBox->hide();
            ui->siteTitle->hide();
            break;
        case 2 : // case 2 is Assigning of programmer to unused sites

            ui->progsnTxt->show();
            ui->progsnTitle->setText("Assign Programmer :");
            ui->siteBox->show();
            ui->siteTitle->show();

            ui->socketTitle->hide();
            ui->socketsnTitle->hide();
            ui->sockettypetxt->hide();
            ui->socketsnTxt->hide();

            ui->newprogTitle->hide();
            ui->newprogTxt->hide();


            break;
        case 3 : // case 3 is internal machine switching
            ui->progsnTxt->show();
            ui->progsnTitle->setText("Programmer 1 :");
            ui->progsnTitle->show();

            ui->newprogTitle->setText("Programmer 2 :");
            ui->newprogTitle->show();
            ui->newprogTxt->show();


            ui->socketTitle->hide();
            ui->socketsnTitle->hide();
            ui->sockettypetxt->hide();
            ui->socketsnTxt->hide();
            ui->siteBox->hide();
            ui->siteTitle->hide();
            break;
            // change the prog text to first prog and new prog to second prog

        case 4 : // case 4 is removal of programmer to review station

            ui->socketTitle->hide();
            ui->socketsnTitle->hide();
            ui->sockettypetxt->hide();
            ui->socketsnTxt->hide();

            ui->newprogTitle->hide();
            ui->newprogTxt->hide();

            ui->siteBox->hide();
            ui->siteTitle->hide();

            ui->socketTitle->hide();
            ui->socketsnTitle->hide();
            ui->progsnTxt->show();
            ui->progsnTitle->setText("Remove Programmer:");
            break;
        }


}


