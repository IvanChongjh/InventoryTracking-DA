//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
//
#include "programmerinfo.h"

ProgrammerInfo::ProgrammerInfo() {}

ProgrammerInfo:: ProgrammerInfo(std::string & type,std::string &location,int &serialnumber)
    :programmer_Type(type),programmer_Location(location),serial_Number(serialnumber)
{

}    // constructor overloading
std::string ProgrammerInfo:: getProgrammer_Type() const
{
    return programmer_Type;

}
void ProgrammerInfo::setProgrammer_Type(const std::string & type)
{
    programmer_Type = type;
}
std::string ProgrammerInfo :: getProgrammer_Location()
{
    return programmer_Location;
}
void ProgrammerInfo:: setProgrammer_Location(const std::string &location)
{
    programmer_Location = location;
}
void ProgrammerInfo::setProgrammer_SN(int &serial)
{
    serial_Number = serial;
}
int ProgrammerInfo::getProgrammer_SN()
{
    return serial_Number;
}

int ProgrammerInfo::getMachinesite()
{
    return machinesite;
}

void ProgrammerInfo::setMachinesite(int newMachinesite)
{
    machinesite = newMachinesite;
}

std::string ProgrammerInfo::getProgissues() const
{
    return remark;
}

void ProgrammerInfo::setProgissues(const std::string &newProgissues)
{
    remark = newProgissues;
}

int ProgrammerInfo::getGsfcAssetNumber() const
{
    return gsfcAssetNumber;
}

void ProgrammerInfo::setGsfcAssetNumber(const int &newGsfcAssetNumber)
{
    gsfcAssetNumber = newGsfcAssetNumber;
}

std::string ProgrammerInfo::getDateOfReport() const
{
    return dateOfReport;
}

void ProgrammerInfo::setDateOfReport(const std::string &newDateOfReport)
{
    dateOfReport = newDateOfReport;
}
