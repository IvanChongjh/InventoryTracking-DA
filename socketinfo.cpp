//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
//
#include "socketinfo.h"

SocketInfo::SocketInfo() {}
SocketInfo::SocketInfo(int &sn, std::string &type)
    : m_socketsn(sn)
    , m_socketType(type)
{

}

int SocketInfo::socketsn() const
{
    return m_socketsn;
}

void SocketInfo::setSocketsn(int newSocketsn)
{
    m_socketsn = newSocketsn;
}

std::string SocketInfo::socketType() const
{
    return m_socketType;
}

void SocketInfo::setSocketType(const std::string &newSocketType)
{
    m_socketType = newSocketType;
}
