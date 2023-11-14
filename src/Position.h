#include <iostream>
namespace Records {
    // This class represents a position within an organization.
    class Position
    {
    public:
        Position();
        // Decrease the budget for the position due to a demerit.
        void decrBudget(int inDemeritAmount);
        // Increase the budget for the position due to a raise.
        void incrBudget(int inRaiseAmount);
        // Add a new requirement for the position.
        void addNewReq(std::string in);
        // Add a new obligation for the position.
        void addNewOblig(std::string in);
        // Display information about the position.
        void display();
        // Get the unique code for the position.
        int getPosCode();
        // Set the unique code for the position.
        void setPosCode(int code);
        // Get the name of the position.
        std::string getPosName();
        // Set the name of the position.
        void setPosName(std::string name);
        // Get the payment (salary) for the position.
        int getPayment();
        // Set the payment (salary) for the position.
        void setPayment(int salary);
        // Get the list of obligations for the position.
        std::string getObligations();
        // Set the list of obligations for the position.
        void setObligations(std::string duties);
        // Get the list of requirements for the position.
        std::string getRequirements();
        // Set the list of requirements for the position.
        void setRequirements(std::string reqs);
    private:
        int posCode;           // A unique identifier for the position.
        std::string posName;   // The name or title of the position.
        int payment;          // The salary or payment for the position.
        std::string obligations;   // Obligations associated with the position.
        std::string requirements;  // Requirements for the position.
    };
}