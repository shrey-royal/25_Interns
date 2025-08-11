// without virtual (diamond problem) - (shared copy of person class)
//         Person
//         /    \
//    Employee  Student
//         \    /
//        Intern

// with virtual (using virutal now we have 2 copies of person class)
//      Person Person
//       /        \
//  Employee   Student
//       \        /
//         Intern
// =================================================================

#include <iostream>
using namespace std;

class Person {
public:
    void showDetails() {
        cout << "This is a person." << endl;
    }
};

class Employee : virtual public Person {
public:
    void work() {
        cout << "This person is an employee." << endl;
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "This person is a student." << endl;
    }
};

class Intern : public Employee, public Student {
public:
    void internInfo() {
        cout << "This person is an intern." << endl;
    }
};

int main() {
    Intern i;

    // i.Employee::showDetails();    //person class  (ambiguity error)
    i.showDetails();
    i.work();           //from employee
    i.study();          //from student
    i.internInfo();     //from intern (object's class)

    return 0;
}