#include <iostream>
#include <stdexcept>
#include <string>
#include "Database.h"
using namespace std;
namespace Records {
Database::Database()
{
nextslot = 0;
nextposnum = firstposnum;
}
Database::~Database()
{
}
Position& Database::addPosition(int code, std::string name, int payment)
{
if (nextslot >= maxPos) {
cerr << "We cannot add more staff!" << endl;
throw exception();

}
Position& newPosition = poslist[nextslot++];
newPosition.setPosCode(code);
newPosition.setPosName(name);
newPosition.setPayment(payment);

return newPosition;
}
Position& Database::getPosition(int code)
{
for (int i = 0; i < nextslot; i++) {
if (poslist[i].getPosCode() == code) {
return poslist[i];
}
}
cerr << "No match with code " << code<< endl;
throw exception();
}
void Database::displayAll()
{
for (int i = 0; i < nextslot; i++) {
poslist[i].display();
}
}
void Database::displayWorkers()
{
for (int i = 0; i < nextslot; i++) {
if (poslist[i].getPayment()<1000) {
poslist[i].display();
}
}
}
void Database::displayAdmins()
{

for (int i = 0; i < nextslot; i++) {
if (poslist[i].getPayment()>=1000) {
poslist[i].display();
}
}
}
}