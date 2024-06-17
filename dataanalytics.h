#ifndef DATAANALYTICS_H
#define DATAANALYTICS_H

#include <QDialog>
#include <QtCharts>


namespace Ui {
class DataAnalytics;
}

class DataAnalytics : public QDialog
{
    Q_OBJECT

public:
    explicit DataAnalytics(QWidget *parent = nullptr);
    ~DataAnalytics();

private:
    Ui::DataAnalytics *ui;
};

#endif // DATAANALYTICS_H
