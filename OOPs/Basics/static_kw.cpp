#include <iostream>
#include <iomanip>  // io manipulation
using namespace std;

class Car {
private:
    int year = 2025;
    double price = 2000000;

public:
    string model = "Civic Type R";
    static string make;     // static data member
    void getCar() {
        cout << "Car(" << make << ", " << model << ", " << year << ", " << price << ")\n";
    }
};

//initialize the static data members using scope resolution operator(::)
string Car::make = "Honda";

int main() {
    cout << fixed << setprecision(0);
    Car c;

    // c.getCar();

    cout << "Company: " << Car::make << endl;
    cout << "Company: " << c.model << endl;

    return 0;
}

/*
static keyword:
    -> they have same memory across multiple objects.
    -> they get their memory at the time of compilation.
    -> the value will be shared among all the objects. Means when you try to modify the value of any static data member, the value will be modified for all the objects.
*/