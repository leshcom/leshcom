#include <iostream>
#include <stdexcept>
#include <string>
#include "Database.h"
using namespace std;
using namespace Records;
int displayMenu();
void doNewOblig(Database& inDB);
void doNewReq(Database& inDB);
void doNewPos(Database& inDB);
void doIncrBudget(Database& inDB);
void doDecrBudget(Database& inDB);

int main(int argc, char** argv)
{
Database employeeDB;
bool done = false;
while (!done) {
int selection = displayMenu();
switch (selection) {
case 1:
doNewPos(employeeDB);
break;
case 3:
doIncrBudget(employeeDB);
break;
case 2:
doDecrBudget(employeeDB);
break;
case 4:
employeeDB.displayAll();
break;
case 5:
employeeDB.displayAdmins();
break;
case 6:
employeeDB.displayWorkers();
break;
case 8:
doNewOblig(employeeDB);
break;
case 7:
doNewReq(employeeDB);
break;
case 0:
done = true;
break;
default:
cerr << "Unknown command." << endl;

}
}
}
int displayMenu()
{
int selection;
cout << endl;
cout << "Employee Database" << endl;
cout << "-----------------" << endl;
cout << "1) Add new Position" << endl;
cout << "2) Decrease Budget" << endl;
cout << "3) Increase Budget" << endl;
cout << "4) List all employees" << endl;
cout << "5) List all Administrators" << endl;
cout << "6) List all Workers" << endl;
cout << "7) Add new Requirments" << endl;
cout << "8) Add new Obligations" << endl;

cout << "0) Quit" << endl;
cout << endl;

cout << "---> ";
cin >> selection;
return selection;
}
void doNewPos(Database& inDB)
{
int code;
string name;
int payment;
cout << "What is code of position? ";
cin >> code;
cout << "What is the name of position? ";
cin >> name;
cout << "What is the payment for the work? ";
cin >> payment;
try {
inDB.addPosition(code, name, payment);
} catch (std::exception ex) {
cerr << "Unable to add new employee!" << endl;
}
}
void doIncrBudget(Database& inDB)
{
int positionCode;
int salaryIncrease;

cout << "Position Code? ";
cin >> positionCode;
cout << "Amount of money? ";
cin >> salaryIncrease;
try {
Position& emp = inDB.getPosition(positionCode);
emp.incrBudget(salaryIncrease);
cout << "Position " << positionCode << " has got " << salaryIncrease<<" budget increase. " << endl;
} catch (std::exception ex) {
cerr << "Unable to increase budget!" << endl;
}
}
void doDecrBudget(Database& inDB)
{
	int positionCode;
	int salaryDecrease;

	cout << "Position Code? ";
	cin >> positionCode;
	cout << "Amount of money? ";
	cin >> salaryDecrease;
	try {

		Position& emp = inDB.getPosition(positionCode);
		emp.decrBudget(salaryDecrease);
		cout << "Position " << positionCode << " has got " << salaryDecrease << " budget decrease. " << endl;

	}
	catch (std::exception ex) {
		cerr << "Unable to decrease budget!" << endl;
	}
}
void doNewReq(Database & inDB)
{
	int positionCode;
	std:string newreq;

	cout << "Position Code? ";
	cin >> positionCode;
	cout << "New requirments? ";
	cin >> newreq;
	newreq.append(".\n");
	try {

		Position& emp = inDB.getPosition(positionCode);
		emp.addNewReq(newreq);
		cout << "Position " << positionCode << " has got new Requirement:\n" << newreq << endl;

	}
	catch (std::exception ex) {
		cerr << "Unable to add new Requirments!" << endl;
	}
}
void doNewOblig(Database & inDB)
{
	int positionCode;
	std:string newoblig;

	cout << "Position Code? ";
	cin >> positionCode;
	cout << "New obligations? ";
	cin >> newoblig;
	newoblig.append(".\n");
	try {

		Position& emp = inDB.getPosition(positionCode);
		emp.addNewOblig(newoblig);
		cout << "Position " << positionCode << " has got new Requirement:\n" << newoblig << endl;

	}
	catch (std::exception ex) {
		cerr << "Unable to add new Obligations!" << endl;
}	
}