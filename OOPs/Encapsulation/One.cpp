#include <iostream>
using namespace std;
#include "user.h"
#include "Two.cpp"

class Employee {
public:
    User user;
    string designation;
    double salary;

    Employee(User user, string designation, double salary) : user(user) {
        this->designation = designation;
        this->salary = salary;
    }
};

class Student {
public:
    User user;
    float marks;
};

int main() {
    User u(101, "Kenil", 89);
    Employee emp(u, "IT Executive (Management)", 50000);

    cout << "Details: " << endl;
    get(u);
    cout << "Designation: " << emp.designation << endl;
    cout << "Salary: " << emp.salary << endl;

    return 0;
}