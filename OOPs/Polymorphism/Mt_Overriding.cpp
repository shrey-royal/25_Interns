#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "The animal makes a generic sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "The dog barks: Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "The cat meows: Meow! Meow!" << endl;
    }
};

int main() {
    Animal* myAnimal;

    myAnimal = new Animal();
    myAnimal->makeSound();
    delete myAnimal;

    myAnimal = new Dog();
    myAnimal->makeSound();
    delete myAnimal;

    myAnimal = new Cat();
    myAnimal->makeSound();
    delete myAnimal;

    return 0;
}