#ifndef HELPER_H
#define HELPER_H
#include "database.h"
#include "inventorytracker.h"
class Helper
{
public:
    Helper();
private :
    void SearchMachineData(Database &data,int & MachineNumber);

};

#endif // HELPER_H
