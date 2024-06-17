#ifndef REVIEWSTATION_H
#define REVIEWSTATION_H

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

namespace Ui {
class ReviewStation;
}

class ReviewStation : public QDialog
{
    Q_OBJECT

public:
    explicit ReviewStation(QWidget *parent = nullptr);
    ~ReviewStation();
    void LoadReviewData();
    void SyncDatabase(Database &database);
private:
    Ui::ReviewStation *ui;
    Database *m_database;
};

#endif // REVIEWSTATION_H
