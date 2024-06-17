//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
//
#include "wrappingdata.h"

WrappingData::WrappingData()
{

}



ProgrammerInfo & WrappingData::getProgData()
{
    return m_progdata;
}
CalibrationDate & WrappingData::getDateData()
{
    return m_datedata;
}
void WrappingData::setProgData(ProgrammerInfo & proginfo)
{
    m_progdata = proginfo;
}

void WrappingData::setDateData(CalibrationDate & datedata)
{
    m_datedata = datedata;
}

SocketInfo WrappingData::socket() const
{
    return m_socket;
}

void WrappingData::setSocket(const SocketInfo &newSocket)
{
    m_socket = newSocket;
}
