#include <iostream>
using namespace std;

enum SIZE {SMALL, MEDIUM, LARGE};

class Pizza {
private:
    string name;
    string toppings[10] = {"\0"};
    SIZE size;
    double price;

    string getServingName(SIZE size) {
        switch(size) {
            case SMALL: return "SMALL";
            case MEDIUM: return "MEDIUM";
            case LARGE: return "LARGE";
        }
    }

public:
    Pizza (string name, string *toppings, SIZE size, double price) {
        this->name = name;
        for (int i = 0; i < toppings->length(); i++) {
            this->toppings[i] = toppings[i];
        }
        this->size = size;
        this->price = price;
    }

protected:
    void seePizza() {
        cout << "Name: " << name << endl;
        cout << "Toppings: [ ";
        for (int i=0; i<toppings->length(); i++) {
            cout << toppings[i] << ", ";
        }
        cout << "\b\b ]\n";
        cout << "Serving: " << getServingName(size) << endl;
        cout << "Price: Rs." << price << endl;
    }
};

class Dominos : public Pizza {
private:
    string flavor;

public:
    Dominos(string name, string *toppings, SIZE size, double price, string flavor) : Pizza(name, toppings, size, price) {
        this->flavor = flavor;
    }

    void getPizza() {
        seePizza();
    }
};

class LaPinoz : public Pizza {
private:
    float discount;

public:
    LaPinoz(string name, string *toppings, SIZE size, double price, string flavor) : Pizza(name, toppings, size, price) {
        this->discount = discount;
    }

    void getPizza() {
        seePizza();
    }
};

int main() {
    string arr[] = {"Paneer", "Grilled Mushrooms", "Onion", "Black Olives", "Jalapeno", "Red Pepper", "Crisp Capsicum", "Fresh Tomato"};
    Dominos dominos("Cheese Volcano Farmhouse", arr, LARGE, 759, "Smokey");

    dominos.getPizza();

    return 0;
}