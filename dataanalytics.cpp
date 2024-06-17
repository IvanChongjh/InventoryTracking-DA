#include "dataanalytics.h"
#include "ui_dataanalytics.h"

DataAnalytics::DataAnalytics(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DataAnalytics)
{
    ui->setupUi(this);
    QLineSeries *ls = new QLineSeries();
    ls->append(0,6);
    ls->append(2,4);
    ls->append(3,8);
    ls->append(7,4);
    ls->append(10,5);

    *ls << QPointF(11,1) << QPointF(13,3) << QPointF(17,6) << QPointF(18,3) << QPointF(20,2);
    QChart * chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(ls);
    chart->createDefaultAxes();
    chart->setTitle("Chart Example");
    QChartView * chartview = new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setParent(ui->horizontalFrame);

}

DataAnalytics::~DataAnalytics()
{
    delete ui;
}
