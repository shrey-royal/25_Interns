#include <iostream>
using namespace std;

class Car {
private:
    string make, model;
    int year;

public:
    Car() { }

    Car(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
        cout << "Parameterized Constructor Called!" << endl;
    }

    // Car(Car &obj) {
    //     this->make = obj.make;
    //     this->model = obj.model;
    //     this->year = obj.year;
    //     cout << "Copy Constructor Called!" << endl;
    // }

    void copy(Car &other) {
        this->make = other.make;
        this->model = other.model;
        this->year = other.year;
    }

    void getCarDetails() {
        cout << "Make: " << make << "\nModel: " << model << "\nYear: " << year << endl;
        cout << "-----------------------------\n";
    }
};

int main() {
    Car obj("Toyota", "Camry", 2024), obj1;

    obj1.copy(obj);

    // obj.getCarDetails();
    obj1.getCarDetails();

    return 0;
}