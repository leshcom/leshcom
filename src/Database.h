#include <iostream>
#include "Position.h"
namespace Records {
const int maxPos = 100;
const int firstposnum = 1000;
class Database
{
public:
Database();
~Database();
Position& addPosition(int code, std::string name, int payment);
Position& getPosition(int code);
void displayAll();
void displayWorkers();
void displayAdmins();
protected:
	Position poslist[maxPos];
int nextslot;
int nextposnum;
};
}