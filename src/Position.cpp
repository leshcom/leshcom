#include <iostream>
#include <string>
#include "Position.h"

using namespace std;
namespace Records {
    Position::Position()
    {
        posCode = 0;
        posName = "";
        payment = 0;
        obligations = "";
        requirements = "";

    }
    void Position::incrBudget(int inRaiseAmount)
    {
        setPayment(getPayment() + inRaiseAmount);
    }
    void Position::decrBudget(int inDemeritAmount)
    {
        setPayment(getPayment() - inDemeritAmount);
    }
    void Position::addNewReq(std::string in)
    {
        requirements.append(in);

    }
    void Position::addNewOblig(std::string in)
    {
        obligations.append(in);
    }

	void Position::display()
	{

		cout << "Position: " << getPosCode() << ", " << getPosName() << endl;
		cout << "-------------------------" << endl;
		cout << (getPayment()<1000 ? "Worker" : "Administrator") << endl;
		cout << "Obligations: " << getObligations() << endl;
		cout << "Requirements:" << getRequirements() << endl;
        cout << "Salary (in $):" << getPayment() << endl;
		cout << endl;
	}
    int Position::getPosCode() {
        return posCode;
    }

    std::string Position::getPosName()  {
        return posName;
    }

    int Position::getPayment()  {
        return payment;
    }

    std::string Position::getObligations()  {
        return obligations;
    }

    std::string Position::getRequirements()  {
        return requirements;
    }

    // Сетери для зміни значень полів
    void Position::setPosCode(int code) {
        posCode = code;
    }

    void Position::setPosName(string name) {
        posName = name;
    }

    void Position::setPayment(int salary) {
        payment = salary;
    }

    void Position::setObligations(string duties) {
        obligations = duties;
    }

    void Position::setRequirements(string reqs) {
        requirements = reqs;
    }
}