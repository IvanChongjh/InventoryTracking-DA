#ifndef PROGRAMMERINFO_H
#define PROGRAMMERINFO_H
#include <string>
//using namespace std;

class ProgrammerInfo
{
public:
    ProgrammerInfo(); // constructor
    ProgrammerInfo(std::string & type,std::string &location,int &serialnumber); // constructor overloading
    ~ProgrammerInfo(){}; // destructor

    std::string getProgrammer_Type() const; // assessors
    void setProgrammer_Type(const std::string & type); // mutators
    std::string getProgrammer_Location();
    void setProgrammer_Location(const std::string &location);
    void setProgrammer_SN(int &serial);
    int getProgrammer_SN();


    int getMachinesite();
    void setMachinesite(int newMachinesite);

    std::string getProgissues() const;
    void setProgissues(const std::string &newProgissues);

    int getGsfcAssetNumber() const;
    void setGsfcAssetNumber(const int &newGsfcAssetNumber);

    std::string getDateOfReport() const;
    void setDateOfReport(const std::string &newDateOfReport);

private:
    int gsfcAssetNumber;
    int machinesite; // machine number if 0 means not in machine
    std::string Serial_Number; // serial number
    std::string programmer_Type;// H9800 / H9600
    std::string programmer_Location; // e.g site 1, H9600/H9800 / manual station / review / repair / machine
    int serial_Number; // 6 digit serial for each programmer
    std::string remark;
    std::string dateOfReport;
};

#endif // PROGRAMMERINFO_H
