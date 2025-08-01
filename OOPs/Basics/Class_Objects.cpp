#include<iostream>
using namespace std;

class Person {
public:     // access specifier
    // data members
    string name;
    int age;

    // methods / member functions
    void introduce() {
        cout << "Hello, My name is " << name << " and I'm " << age << " years old!" << endl;
    }

    void sleep() {
        cout << name << "is currently sleeping..." << endl;
    }

    void speak() {
        cout << name << "is speaking..." << endl;
    }
};

class CalculateDiscount {
private:
    float discount;

public:
    void setDiscount(float discount_percentage) {
        if (discount_percentage >= 0 && discount_percentage <= 100) {
            discount = discount_percentage;
        } else {
            cout << "Invalid discount rate.\n";
            discount = 0;
        }
    }

    float getDiscount(float price) {
        return price - (price * discount/100);
    }
};

int main() {
    // Object
    Person person;  // declaration / instantiation

    person.name = "Tapan H. Ranipa";
    person.age = 21;

    person.introduce();
    person.speak();
    person.sleep();

    CalculateDiscount c;
    // c.discount = 23; // private data
    c.setDiscount(70);
    cout << "Original Price is 1000\n";
    cout << "Discounted Price: " << c.getDiscount(1000) << endl;

    return 0;
}

/*
Access Specifiers/Modifiers: They are used to define a certain level of access to the data members or methods of the class.

1. Private (default): within the class only
2. Protected: within the class as well as it's child classes
3. Public: Accesible anywhere

*/