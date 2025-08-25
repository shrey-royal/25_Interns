#include <iostream>
using namespace std;

// Abstract class - a class that will have abstract methods in it.
class ATM {
public:
    virtual void insertCard() = 0;
    virtual void enterPIN() = 0;
    virtual void withdrawCash() = 0;
    virtual ~ATM() {    // virutal destructor
        cout << "ATM Object deleted!" << endl;
    }
};

// Concrete Class - a class that has all the methods implemented of it's abstract class
class MyBankATM : public ATM {
public:
    void insertCard() override {
        cout << "Card inserted successfully!" << endl;
    }

    void enterPIN() override {
        cout << "PIN entered correctly!" << endl;
    }

    void withdrawCash() override {
        cout << "Withdrawing cash..." << endl;
    }
};

int main() {
    ATM* atm = new MyBankATM();
    atm->insertCard();
    atm->enterPIN();
    atm->withdrawCash();

    delete atm;

    return 0;
}

/*
Abstraction - Data Hiding
-> It is a process of hiding the implementation details and only showing the functionality to the users.

-> There are 2 ways to hide the data:
    1. Abstract Classes (0% to 100% abstraction is possible)
    2. Interfaces (not supported in cpp) (100% abstraction is possible)

-> In any abstract class we will have both abstract methods and non-abstract methods.
-> Abstract methods do not have body, we have to explicitly define the method body while overriding that method in the child class.
-> If i want to make any method as abstract, i need to declare it as a pure virtual function.

syntax:
    virtual method_name(parameters) = 0;

-> We can't create object of abstract class

*/