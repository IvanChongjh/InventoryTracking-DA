#ifndef SOCKETINFO_H
#define SOCKETINFO_H
#include <iostream>
#include <string>
//using namespace std;
class SocketInfo
{
public:
    SocketInfo();
    SocketInfo(int &sn, std::string &type);
    int socketsn() const;
    void setSocketsn(int newSocketsn);

    std::string socketType() const;
    void setSocketType(const std::string &newSocketType);

private :
    int m_socketsn;
    std::string m_socketType;
};

#endif // SOCKETINFO_H
