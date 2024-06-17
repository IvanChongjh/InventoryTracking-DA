#include "database.h"

Database::Database() {}

void Database::AddtoDatabase(WrappingData &data)
{
    database.push_back(data);
}
void Database::  ExportDatabase(const std::string &path)
{
    // export out all data after editing from UI

}

int Database:: SizeOfDatabase()
{
    int size = 0 ;
    size    = database.size();
    return size;
}
std::vector<WrappingData> & Database:: getDatabase()
{
    return database;
 }
