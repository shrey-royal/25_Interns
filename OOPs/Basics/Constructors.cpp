#include<iostream>
using namespace std;

class FoodItem {
private:
    int id;
    string name;
    string description;
    double price;
    float rating;
    
public:

    // Constructor: A special method that automatically invokes when an object is created.
    // FoodItem() {
    //     id = 0;
    //     name = description = "";
    //     price = 0.0;
    //     rating = 0.0;

    //     cout << "Default Constructor!" << endl;
    // }

    FoodItem(int id, string name, string description, double price, float rating) : id(id), name(name), description(description), price(price), rating(rating) {
        cout << "Parameterized Constructor!" << endl;
    }
    
    void printFoodItem() {
        cout << "Id: " << id << "\nName: " << name << "\nDescription: " << description << "\nPrice: " << price << "\nRating: " << rating << "\n";
    }
};

int main() {
    FoodItem item1(101, "Chocolate Cookie", "Chocochip cookie without maida", 20, 4.5f); // Here the constructor will be called!

    item1.printFoodItem();

    return 0;
}

/*
Constructor: A special method that invokes(call) automatically when the object is created.

-> Constructors are used primarily to initialize the objects.

There are 3 types of a constructor:
    1. Default Constructor (no arguments)
    2. Parameterized Constructor (with arguments)
    3. Copy Constructor

Rules to define a constructor:
    1. Always the name of the constructor will be same as the class name.
    2. Constructors do not have any return type.
*/