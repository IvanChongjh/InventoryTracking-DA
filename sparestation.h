#ifndef SPARESTATION_H
#define SPARESTATION_H

#include <QDialog>
#include "database.h"
namespace Ui {
class SpareStation;
}

class SpareStation : public QDialog
{
    Q_OBJECT

public:
    explicit SpareStation(QWidget *parent = nullptr);
    ~SpareStation();
    void LoadRepairData();
    void SyncDatabase(Database &database);
private:
    Ui::SpareStation *ui;
    Database * m_database;
};

#endif // SPARESTATION_H
