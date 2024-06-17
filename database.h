#ifndef DATABASE_H
#define DATABASE_H


#include "wrappingdata.h"
#include <vector>


class Database
{
public:
    Database();
    void AddtoDatabase(WrappingData &data);
    void ExportDatabase(const std::string &path);
    void RemoveFromDatabase(WrappingData&data);
    int SizeOfDatabase(); // for checking purpose
    std::vector<WrappingData> & getDatabase();
    private:
    // include database type vector<> map<>
        std::vector<WrappingData> database;


};





#endif // DATABASE_H
