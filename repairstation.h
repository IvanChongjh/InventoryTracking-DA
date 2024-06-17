#ifndef REPAIRSTATION_H
#define REPAIRSTATION_H

#include <QDialog>
#include "database.h"
namespace Ui {
class RepairStation;
}

class RepairStation : public QDialog
{
    Q_OBJECT

public:
    explicit RepairStation(QWidget *parent = nullptr);
    ~RepairStation();
    void LoadRepairData();
    void SyncDatabase(Database &database);

private:
    Ui::RepairStation *ui;
      Database *m_database;
};

#endif // REPAIRSTATION_H
