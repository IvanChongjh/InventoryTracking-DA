#ifndef WRAPPINGDATA_H
#define WRAPPINGDATA_H
#include "calibrationdate.h"
#include "programmerinfo.h"
#include "SocketInfo.h"
class WrappingData
{
public:
    WrappingData();
    ~WrappingData(){};

    ProgrammerInfo & getProgData();
    CalibrationDate & getDateData();
    void setProgData(ProgrammerInfo & proginfo);
    void setDateData(CalibrationDate & datedata);


    SocketInfo socket() const;
    void setSocket(const SocketInfo &newSocket);

private :
    CalibrationDate  m_datedata;
    ProgrammerInfo  m_progdata;
    SocketInfo m_socket;
};

#endif // WRAPPINGDATA_H
