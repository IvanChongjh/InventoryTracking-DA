#ifndef ACTIVITYLOG_H
#define ACTIVITYLOG_H

#include <QDialog>
#include "Database.h"
#include <iostream>
#include <fstream>
#include <sstream>


namespace Ui {
class ActivityLog;
}

class ActivityLog : public QDialog
{
    Q_OBJECT

public:
    explicit ActivityLog(QWidget *parent = nullptr);
    ~ActivityLog();
    void SetDatabase(Database &database);
    void SetActivityList();
private:
    Ui::ActivityLog *ui;
    Database * data;
};

#endif // ACTIVITYLOG_H
