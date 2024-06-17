//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
//


#include "inventorytracker.h"
#include "./ui_inventorytracker.h"

InventoryTracker::InventoryTracker(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::InventoryTracker)
{
    ui->setupUi(this);
    ui->messageTxt->setText("");
}

InventoryTracker::~InventoryTracker()
{
    delete ui;
    delete ReviewStation;
    delete RepairStation;
    delete SpareStation;
    delete dataview;
}




void InventoryTracker::on_ViewBtn_clicked()
{
   // view programmer storage reiview station , spare station , repair station

     ReviewStation = new class ReviewStation(this);
     SpareStation = new class SpareStation(this);
     RepairStation = new class RepairStation(this);


    if (ui->reviewrb->isChecked())
   {


      // qDebug() << " Review Activated " ; // to be replaced by each review ui
      ReviewStation->show();
      ReviewStation->SyncDatabase(maindatabase);
      ReviewStation->LoadReviewData();



   }
    else if ( ui->sparerb->isChecked())
    {
       // qDebug() << " Spare Activated " ; // to be replaced by spare review ui

       SpareStation->show();
       SpareStation->SyncDatabase(maindatabase);
       SpareStation->LoadRepairData();

    }
   else if ( ui->repairrd->isChecked())
   {
      // qDebug() << " Repair Activated " ; // to be replaced by repair ui
        RepairStation->show();
      RepairStation->show();
      RepairStation->SyncDatabase(maindatabase);
      RepairStation->LoadRepairData();

   }



}


void InventoryTracker::on_EditBtn_clicked()
{


    // Comeout with a function to get which machine is selected from group and return machine number
    secdialog = new class secdialog(this);
    secdialog->show();
    int machineno = locate_machineChecked();
    secdialog->setMachineSelected(machineno);
    secdialog->setDatabase(maindatabase);
   // cout << maindatabase.SizeOfDatabase() << endl;
    // Database db;
    // db = *maindatabase;
    // int n = db.SizeOfDatabase();
    // cout << n << endl;
    //set programmers in machine
    //set Review station in machine
    //set spare station in machine
    // set repair station in machine
    // find out why the program crashes
       secdialog->setProgrammerList();


}


int InventoryTracker:: locate_machineChecked()
{


    // include all 58 machine
    QString checkedmachine = "N/A";
    int machinenumber = 0;

    // manual
    if(ui->manual1->isChecked())
    {
       checkedmachine = ui->manual1->text();
       machinenumber = checkedmachine.toInt();
       return machinenumber;
    }
    if(ui->manual2->isChecked())
    {
        checkedmachine = ui->manual2->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->manual3->isChecked())
    {
        checkedmachine = ui->manual3->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->manual4->isChecked())
    {
        checkedmachine = ui->manual4->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->manual5->isChecked())
    {
        checkedmachine = ui->manual5->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->manual6->isChecked())
    {
        checkedmachine = ui->manual6->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->manual7->isChecked())
    {
        checkedmachine = ui->manual7->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->manual8->isChecked())
    {
        checkedmachine = ui->manual8->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->manual9->isChecked())
    {
        checkedmachine = ui->manual9->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->manual10->isChecked())
    {
        checkedmachine = ui->manual10->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->manual11->isChecked())
    {
        checkedmachine = ui->manual11->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    // AP700 19X
    if(ui->ap60015->isChecked())
    {
        checkedmachine = ui->ap60015->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60034->isChecked())
    {
        checkedmachine = ui->ap60034->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60016->isChecked())
    {
        checkedmachine = ui->ap60016->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60022->isChecked())
    {
        checkedmachine = ui->ap60022->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60023->isChecked())
    {
        checkedmachine = ui->ap60023->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap122455->isChecked())
    {
        checkedmachine = ui->ap122455->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap100023->isChecked()) // causing error review
    {
        checkedmachine = ui->ap100023->text(); // causing error review 10023 was
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60032->isChecked())
    {
        checkedmachine = ui->ap60032->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60033->isChecked())
    {
        checkedmachine = ui->ap60033->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    // here continue
    if(ui->ap124524->isChecked())
    {
        checkedmachine = ui->ap124524->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap124540->isChecked())
    {
        checkedmachine = ui->ap124540->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60006->isChecked())
    {
        checkedmachine = ui->ap60006->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60017->isChecked())
    {
        checkedmachine = ui->ap60017->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60005->isChecked())
    {
        checkedmachine = ui->ap60005->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap134228->isChecked())
    {
        checkedmachine = ui->ap134228->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60000->isChecked())
    {
        checkedmachine = ui->ap60000->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60011->isChecked())
    {
        checkedmachine = ui->ap60011->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap133929->isChecked())
    {
        checkedmachine = ui->ap133929->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap133928->isChecked())
    {
        checkedmachine = ui->ap133928->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    // AP 900 8X

    if(ui->ap60051->isChecked())
    {
        checkedmachine = ui->ap60051->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60046->isChecked())
    {
        checkedmachine = ui->ap60046->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60047->isChecked())
    {
        checkedmachine = ui->ap60047->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60053->isChecked())
    {
        checkedmachine = ui->ap60053->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60054->isChecked())
    {
        checkedmachine = ui->ap60054->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60044->isChecked())
    {
        checkedmachine = ui->ap60044->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60055->isChecked())
    {
        checkedmachine = ui->ap60055->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap127028->isChecked())
    {
        checkedmachine = ui->ap127028->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    //AP720  4X
    if(ui->ap128259->isChecked())
    {
        checkedmachine = ui->ap128259->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap136268->isChecked())
    {
        checkedmachine = ui->ap136268->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap136269->isChecked())
    {
        checkedmachine = ui->ap136269->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap134119->isChecked())
    {
        checkedmachine = ui->ap134119->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }

    //AP700 X 22
    if(ui->ap60822->isChecked())
    {
        checkedmachine = ui->ap60822->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60817->isChecked())
    {
        checkedmachine = ui->ap60817->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60845->isChecked())
    {
        checkedmachine = ui->ap60845->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap122457->isChecked())
    {
        checkedmachine = ui->ap122457->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60019->isChecked())
    {
        checkedmachine = ui->ap60019->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap122456->isChecked())
    {
        checkedmachine = ui->ap122456->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60018->isChecked())
    {
        checkedmachine = ui->ap60018->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60008->isChecked())
    {
        checkedmachine = ui->ap60008->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60021->isChecked())
    {
        checkedmachine = ui->ap60021->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60007->isChecked())
    {
        checkedmachine = ui->ap60007->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }

    // continue here
    if(ui->ap60056->isChecked())
    {
        checkedmachine = ui->ap60056->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60050->isChecked())
    {
        checkedmachine = ui->ap60050->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60057->isChecked())
    {
        checkedmachine = ui->ap60057->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap127029->isChecked())
    {
        checkedmachine = ui->ap127029->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60762->isChecked())
    {
        checkedmachine = ui->ap60762->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60863->isChecked())
    {
        checkedmachine = ui->ap60863->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60767->isChecked())
    {
        checkedmachine = ui->ap60767->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60744->isChecked())
    {
        checkedmachine = ui->ap60744->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60781->isChecked())
    {
        checkedmachine = ui->ap60781->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60749->isChecked())
    {
        checkedmachine = ui->ap60749->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60776->isChecked())
    {
        checkedmachine = ui->ap60776->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap60031->isChecked())
    {
        checkedmachine = ui->ap60031->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }

    // AP710 // 5X
    if(ui->ap132520->isChecked())
    {
        checkedmachine = ui->ap132520->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap133091->isChecked())
    {
        checkedmachine = ui->ap133091->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap132539->isChecked())
    {
        checkedmachine = ui->ap132539->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap135629->isChecked())
    {
        checkedmachine = ui->ap135629->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }
    if(ui->ap134118->isChecked())
    {
        checkedmachine = ui->ap134118->text();
        machinenumber = checkedmachine.toInt();
        return machinenumber;
    }

    return 0;

}
void InventoryTracker::on_searchBtn_clicked()
{
    QString text = ui->searchTxt->text();
    int machinenumber = text.toInt();
    bool found = false;

    // QString Machine = ui->ap10023->text();
    // int x = Machine.toInt();
    // qDebug() << "Hello here is the debug results : " << x ;
    // include all 58 machine
    ui->searchTxt->setText("");
    //manual station
    if(ui->manual1->text() == text)
    {
        ui->manual1->setStyleSheet("background-color : white");
         found = true;

    }
    if(ui->manual2->text() == text)
    {
        ui->manual2->setStyleSheet("background-color : white");
         found = true;

    }
    if(ui->manual3->text() == text)
    {
        ui->manual3->setStyleSheet("background-color : white");
         found = true;

    }
    if(ui->manual4->text() == text)
    {
        ui->manual4->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->manual5->text() == text)
    {
        ui->manual5->setStyleSheet("background-color : white");
            found = true;
    }
    if(ui->manual6->text() == text)
    {
        ui->manual6->setStyleSheet("background-color : white");
          found = true;
    }
    if(ui->manual7->text() == text)
    {
        ui->manual7->setStyleSheet("background-color : white");
             found = true;
    }
    if(ui->manual8->text() == text)
    {
        ui->manual8->setStyleSheet("background-color : white");
           found = true;
    }
    if(ui->manual9->text() == text)
    {
        ui->manual9->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->manual10->text() == text)
    {
        ui->manual10->setStyleSheet("background-color : white");
            found = true;
    }
    if(ui->manual11->text() == text)
    {
        ui->manual11->setStyleSheet("background-color : white");
           found = true;
    }

     // AP700 19X
    if(ui->ap60015->text() == text)
    {


     ui->ap60015->setStyleSheet("background-color : white");
                  found = true;




    }
    if(ui->ap60034->text() == text)
    {

        ui->ap60034->setStyleSheet("background-color : white");
           found = true;
    }
    if(ui->ap60016->text() == text)
    {

        ui->ap60016->setStyleSheet("background-color : white");
           found = true;
    }
    if(ui->ap60022->text() == text)
    {

        ui->ap60022->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60023->text() == text)
    {

        ui->ap60023->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap122455->text() == text)
    {

        ui->ap122455->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap100023->text() == text) // causing error
    {

        ui->ap100023->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60032->text() == text)
    {

        ui->ap60032->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60033->text() == text)
    {

        ui->ap60033->setStyleSheet("background-color : white");
         found = true;
    }
    // here continue
    if(ui->ap124524->text() == text)
    {

        ui->ap124524->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap124540->text() == text)
    {

        ui->ap124540->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60006->text() == text)
    {

        ui->ap60006->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60017->text() == text)
    {

        ui->ap60017->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60005->text() == text)
    {

        ui->ap60005->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap134228->text() == text)
    {

        ui->ap134228->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60000->text() == text)
    {

        ui->ap60000->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60011->text() == text)
    {

        ui->ap60011->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap133929->text() == text)
    {

        ui->ap133929->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap133928->text() == text)
    {

        ui->ap133928->setStyleSheet("background-color : white");
         found = true;
    }
    // AP 900 8X

    if(ui->ap60051->text() == text)
    {

        ui->ap60051->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60046->text() == text)
    {

        ui->ap60046->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60047->text() == text)
    {

        ui->ap60047->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60053->text() == text)
    {

        ui->ap60053->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60054->text() == text)
    {

        ui->ap60054->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60044->text() == text)
    {

        ui->ap60044->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60055->text() == text)
    {

        ui->ap60055->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap127028->text() == text)
    {

        ui->ap127028->setStyleSheet("background-color : white");
         found = true;
    }
    //AP720  4X
    if(ui->ap128259->text() == text)
    {

        ui->ap128259->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap136268->text() == text)
    {

        ui->ap136268->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap136269->text() == text)
    {

        ui->ap136269->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap134119->text() == text)
    {

        ui->ap134119->setStyleSheet("background-color : white");
         found = true;
    }

    //AP700 X 22
    if(ui->ap60822->text() == text)
    {

        ui->ap60822->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60817->text() == text)
    {

        ui->ap60817->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60845->text() == text)
    {

        ui->ap60845->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap122457->text() == text)
    {

        ui->ap122457->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60019->text() == text)
    {

        ui->ap60019->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap122456->text() == text)
    {

        ui->ap122456->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60018->text() == text)
    {

        ui->ap60018->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60008->text() == text)
    {

        ui->ap60008->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60021->text() == text)
    {

        ui->ap60021->setStyleSheet("background-color : white");
         found = true;
    }
    if(ui->ap60007->text() == text)
    {

        ui->ap60007->setStyleSheet("background-color : white");
         found = true;
    }

    // continue here
       if(ui->ap60056->text() == text)
       {

        ui->ap60056->setStyleSheet("background-color : white");
            found = true;
        }
       if(ui->ap60050->text() == text)
        {

            ui->ap60050->setStyleSheet("background-color : white");
            found = true;
        }
        if(ui->ap60057->text() == text)
        {

            ui->ap60057->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap127029->text() == text)
        {

            ui->ap127029->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap60762->text() == text)
        {

            ui->ap60762->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap60863->text() == text)
        {

            ui->ap60863->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap60767->text() == text)
        {

            ui->ap60767->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap60744->text() == text)
        {

            ui->ap60744->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap60781->text() == text)
        {

            ui->ap60781->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap60749->text() == text)
        {

            ui->ap60749->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap60776->text() == text)
        {

            ui->ap60015->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap60031->text() == text)
        {

            ui->ap60031->setStyleSheet("background-color : white");
        }

        // AP710 // 5X
        if(ui->ap132520->text() == text)
        {

            ui->ap132520->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap133091->text() == text)
        {

            ui->ap133091->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap132539->text() == text)
        {

            ui->ap132539->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap135629->text() == text)
        {

            ui->ap135629->setStyleSheet("background-color : white");
             found = true;
        }
        if(ui->ap134118->text() == text)
        {

            ui->ap134118->setStyleSheet("background-color : white");
             found = true;
        }

        if(found == false)
        {
            ui->messageTxt->setText(" Machine Asset Number : " + QString::number(machinenumber) + " \n not found ! \n" );
        }
        else
        {
            ui->messageTxt->setText("Machine Asset Number :" + QString::number(machinenumber) + "\nHighlighted in White\n"  );

        }

}


void InventoryTracker::on_storageEdit_clicked()
{
    StorageEdit = new class StorageEdit(this);
    StorageEdit->show();
}


void InventoryTracker::on_clearBtn_clicked()
{

    ui->messageTxt->setText("");
    // Manual station
    ui->manual1->setStyleSheet( "background-color: rgb(255, 0, 0)");
    ui->manual2->setStyleSheet( "background-color: rgb(255, 0, 0)");
    ui->manual3->setStyleSheet( "background-color: rgb(255, 0, 0)");
    ui->manual4->setStyleSheet( "background-color: rgb(255, 0, 0)");
    ui->manual5->setStyleSheet( "background-color: rgb(255, 0, 0)");
    ui->manual6->setStyleSheet( "background-color: rgb(255, 0, 0)");
    ui->manual7->setStyleSheet( "background-color: rgb(255, 0, 0)");
    ui->manual8->setStyleSheet( "background-color: rgb(255, 0, 0)");
    ui->manual9->setStyleSheet( "background-color: rgb(255, 0, 0)");
    ui->manual10->setStyleSheet( "background-color: rgb(255, 0, 0)");
     ui->manual11->setStyleSheet( "background-color: rgb(255, 0, 0)");
    // AP600

        ui->ap60015->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap60034->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap60016->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap60022->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap60023->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap122455->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap100023->setStyleSheet("background-color: rgb(0, 170, 127)");// causing error was 10023
        ui->ap60032->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap60033->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap124524->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap124540->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap60006->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap60017->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap60005->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap134228->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap60000->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap60011->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap133929->setStyleSheet("background-color: rgb(0, 170, 127)");
        ui->ap133928->setStyleSheet("background-color: rgb(0, 170, 127)");

    // AP 900 8X


        ui->ap60051->setStyleSheet("background-color: rgb(0, 170, 255)");
        ui->ap60046->setStyleSheet("background-color: rgb(0, 170, 255)");
        ui->ap60047->setStyleSheet("background-color: rgb(0, 170, 255)");
        ui->ap60053->setStyleSheet("background-color: rgb(0, 170, 255)");
        ui->ap60054->setStyleSheet("background-color: rgb(0, 170, 255)");
        ui->ap60044->setStyleSheet("background-color: rgb(0, 170, 255)");
        ui->ap60055->setStyleSheet("background-color: rgb(0, 170, 255)");
        ui->ap127028->setStyleSheet("background-color: rgb(0, 170, 255)");


    //AP720  4X

        ui->ap128259->setStyleSheet("background-color: rgb(255, 170, 0)");
        ui->ap136268->setStyleSheet("background-color: rgb(255, 170, 0)");
        ui->ap136269->setStyleSheet("background-color: rgb(255, 170, 0)");
        ui->ap134119->setStyleSheet("background-color: rgb(255, 170, 0)");


    //AP700 X 22

        ui->ap60822->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60817->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60845->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap122457->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60019->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap122456->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60018->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60008->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60021->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60007->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60056->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60050->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60057->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap127029->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60762->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60863->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60767->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60744->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60781->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60749->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60776->setStyleSheet("background-color: rgb(255, 170, 255)");
        ui->ap60031->setStyleSheet("background-color: rgb(255, 170, 255)");


    // AP710 // 5X

        ui->ap132520->setStyleSheet("background-color: rgb(255, 85, 0)");
        ui->ap133091->setStyleSheet("background-color: rgb(255, 85, 0)");
        ui->ap132539->setStyleSheet("background-color: rgb(255, 85, 0)");
        ui->ap135629->setStyleSheet("background-color: rgb(255, 85, 0)");
        ui->ap134118->setStyleSheet("background-color: rgb(255, 85, 0)");


}



void InventoryTracker::loadDatabase()
{

    std::string text;
    std::string title;
    int CaliDateIndex;
    int reason;
    int ProgrammerType;
    int GSFCindex;
    int dateofrequest;
    //int ProgrammerPurchaseDate;
    int ProgrammerSN;
    int machineloc;
    int location;
    int index = 0;

    std::string data;
    //  load all data from excel file
    //Programmer_S/N,Programmer_Type,GSFC,Last_Calibration_Date,Location,Site,Reason,Date_Reported,
    std::ifstream inputfile(INPUT_FILENAME.c_str()); // filename;
    ui->messageTxt->setText("Loading Database Please Wait..");
    if(inputfile.rdstate() == 0 ) // read state 0 means ready to be read;
    {
        std::cout << "file ready.. reading file..." << std::endl;

        getline(inputfile,text);

        std::stringstream titlebreakdown(text);

        while(getline(titlebreakdown,title,','))
        {

            if(title == "Programmer_S/N") // 1
            {
                ProgrammerSN = index;

            }
            else if(title == "Programmer_Type") // 2
            {
                ProgrammerType = index;

            }
            else if(title == "GSFC") // 3
            {
                GSFCindex =index;
            }
            else if (title == "Last_Calibration_Date") // 4
            {
                CaliDateIndex = index;
            }
            else if(title == "Location") // 5
            {
                location = index;
            }
            else if (title == "Site")// 6
            {
                machineloc = index;
            }
            else if ( title == "Reason")// 7
            {
                reason = index;
            }

            else if(title == "Date_Reported") // 8
            {
                dateofrequest = index;
                // cout << "Purchase "<<index << " \n" <<endl;
            }
            // else if(title == "Location_Programmer"){
            //     location = index;
            //     //cout << "Location "<<index << " \n" <<endl;
            // }

            else
            {
                //cout << " Text : " << text << " Not Found " << endl;
            }
            index ++;
        }



        int counter = 0 ;
        std::string breakdown;
        while(getline(inputfile,data))
        {
            //cout << " Data Only :" << data << endl;
            ProgrammerInfo prog;
            CalibrationDate date;
            WrappingData datas;
            std::stringstream value(data);

            std::string datedata;
            //Programmer_S/N,Programmer_Type,GSFC,Last_Calibration_Date,Location,Site,Reason,Date_Reported,
            while(counter <= index)
            {

                getline(value,breakdown,',');

                if(counter == ProgrammerType) // 1
                {

                    prog.setProgrammer_Type(breakdown);
                }
                if(counter == CaliDateIndex && breakdown != "") // 2
                {
                   // cout << "Programmer purchase date " << breakdown <<endl;
                    // breakdown the date 26/04/2014
                     //std::cout << " Programmer Date Of Request " << breakdown << std::endl;
                    std::stringstream dates(breakdown);
                     getline(dates,datedata,'/');
                    int day = stoi(datedata);
                    getline(dates,datedata,'/');
                    int month = stoi(datedata);
                    getline(dates,datedata,'/');
                    int year = stoi(datedata);
                    date.setDay(day);
                    date.setMonth(month);
                    date.setYear(year);

                }
                if(counter == GSFCindex && breakdown != "") // 3
                {
                    int gsfcasset = stoi(breakdown);
                    prog.setGsfcAssetNumber(gsfcasset);
                    //  std::cout << " Programmer GSFC : " << breakdown << std::endl;
                }

                if(counter == reason && breakdown != "") // 4
                {
                    prog.setProgissues(breakdown);
                }
                if(counter == ProgrammerSN) // 5
                {
                    //std::cout << "Programmer SN :" << breakdown<< std::endl;
                    int sn = stoi(breakdown);
                    prog.setProgrammer_SN(sn);
                      //std::cout << " Programmer SN : " << breakdown << std::endl;
                }
                if(counter == location)// 6
                {
                    // cout << "Programmer SN :" << breakdown << endl;

                    prog.setProgrammer_Location(breakdown);
                }
                if(counter == machineloc && breakdown != "")//7
                {

                  //  std::cout << " Programmer Site : " << breakdown << std::endl;
                       //site number
                    int machloc = stoi(breakdown);
                    prog.setMachinesite(machloc);

                }
                if (counter == dateofrequest && breakdown != "")
                {
                    prog.setDateOfReport(breakdown);
                }
                counter ++;
            }
            counter = 0 ; // reset counter
            // include calibration details into wrapper class
            datas.setProgData(prog);
            datas.setDateData(date);

            maindatabase.AddtoDatabase(datas);

        }


    }
    else
        std::cerr << "File " << INPUT_FILENAME << " cannot be read !" << std::endl;

    //cout << "Size of vector now is : "  << db.SizeOfDatabase() << endl;
    ui->messageTxt->setText("Database Loaded");

}




void InventoryTracker::on_dataanalysisBtn_clicked()
{
    // include new page
    dataview = new DataAnalytics(this);
    dataview->show();

}





void InventoryTracker::on_ActivityLogBtn_clicked()
{
    log = new ActivityLog(this);
    log->show();
    log->SetDatabase(maindatabase);
    log->SetActivityList();
}

