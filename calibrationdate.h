#ifndef CALIBRATIONDATE_H
#define CALIBRATIONDATE_H

class CalibrationDate
{
public:
    CalibrationDate();
    ~CalibrationDate(){};
    CalibrationDate(int&day,int&month,int&year);

    int getDay();
    void setDay(const int&day);
    int getMonth();
    void setMonth(const int&month);
    int getYear();
    void setYear(const int&year);


private :

    int m_day;
    int m_month;
    int m_year;

};

#endif // CALIBRATIONDATE_H
