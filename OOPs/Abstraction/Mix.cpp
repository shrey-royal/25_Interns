#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;

    virtual void displayInfo() {
        cout << "This is a generic shape." << endl;
    }

    void setID(int id) {
        this->id = id;
    }

    int getID() const {
        return id;
    }

protected:
    int id;
};

class Circle : public Shape {
private:
    double radius;

public:
    // Circle (double r) : radius(r) {}

    Circle(double radius) {
        this->radius = radius;
    }

    double calculateArea() override {
        return M_PI * radius * radius;
    }

    void displayInfo() override {
        cout << "This is a circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    // Circle (double r) : radius(r) {}

    Rectangle(double length, double width) {
        this->length = length;
        this->width = width;
    }

    double calculateArea() override {
        return length * width;
    }

    void displayInfo() override {
        cout << "This is a rectangle with length " << length << " and width " << width << endl;
    }
};

int main() {
    Shape* myShape;
    
    Circle myCircle(20.0);
    Rectangle myRectangle(4.0, 6.0);

    myCircle.setID(1);
    myRectangle.setID(2);

    myShape = &myCircle;
    cout << "Circle ID: " << myShape->getID() << endl;
    cout << "Circle Area: " << myShape->calculateArea() << endl;
    myShape->displayInfo();

    cout << endl;
    
    myShape = &myRectangle;
    cout << "Rectangle ID: " << myShape->getID() << endl;
    cout << "Rectangle Area: " << myShape->calculateArea() << endl;
    myShape->displayInfo();

    cout << endl;


    return 0;
}