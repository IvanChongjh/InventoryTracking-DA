#include "calibrationdate.h"

CalibrationDate::CalibrationDate() {}

CalibrationDate::CalibrationDate(int&day,int&month,int&year)
    :m_day(day),m_month(month),m_year(year)
{

}

int CalibrationDate::getDay()
{
    return m_day;
}
void CalibrationDate:: setDay(const int&day)
{
    m_day = day;

}
int CalibrationDate:: getMonth()
{
    return m_month;
}
void CalibrationDate:: setMonth(const int&month)
{
    m_month = month;
}
int CalibrationDate:: getYear()
{

    return m_year;
}
void CalibrationDate:: setYear(const int&year)
{

    m_year = year;
}
