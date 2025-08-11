#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Bird {
public:
    void fly() {
        cout << "This bird can fly." << endl;
    }
};

class Bat : public Animal, public Bird {
public:
    void hangUpsideDown() {
        cout << "The bat hangs upside down." << endl;
    }
};

int main() {
    Bat b;
    b.eat();
    b.fly();
    b.hangUpsideDown();

    return 0;
}