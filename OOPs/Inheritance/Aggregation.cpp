#include <iostream>
using namespace std;

class Address {
    string houseNo;
    string society;
    string landmark;
    string city;
    int pincode;

public:
    Address() {}
    Address(string houseNo, string society, string landmark, string city, int pincode) {
        this->houseNo = houseNo;
        this->society = society;
        this->landmark = landmark;
        this->city = city;
        this->pincode = pincode;
    }

    void getAddress() {
        cout << "\nAddress: house no - " << houseNo << ", society - " << society << ", landmark - " << landmark << ", city - " << city << ", pincode - " << pincode;
    }

    void setAddress(string houseNo, string society, string landmark, string city, int pincode) {
        this->houseNo = houseNo;
        this->society = society;
        this->landmark = landmark;
        this->city = city;
        this->pincode = pincode;
    }
};

class Student {
    int rollNo;
    string name;
    int standard;
    float marks;
    Address address;    // Student HAS-A Address

public:
    Student() {}

    Student(int rollNo, string name, int standard, float marks, Address address) {
        this->rollNo = rollNo;
        this->name = name;
        this->standard = standard;
        this->marks = marks;
        this->address = address;
    }

    void getStudentDetails() {
        cout << "Roll No: " << rollNo << "\nName: " << name << "\nStandard: " << standard << "\nMarks: " << marks;
        address.getAddress();
    }
};

int main() {
    // Address add1("A-89", "Sparsh Valley", "opp. Neo Mall", "Chandigarh", 776253);
    // Student stu1(12, "Jigar", 8, 78.6f, add1);
    Student stu1(12, "Jigar", 8, 78.6f, Address("A-89", "Sparsh Valley", "opp. Neo Mall", "Chandigarh", 776253));

    stu1.getStudentDetails();

    return 0;
}