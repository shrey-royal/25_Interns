#include <iostream>
using namespace std;

class Watch {
protected:
    string company;
    string model;
    double price;

    void showWatch() {
        cout << "Company: " << company << ", Model: " << model << ", Price: " << price;
    }

public:
    Watch(string company, string model, double price) {
        cout << "Watch()" << endl;
        this->company = company;
        this->model = model;
        this->price = price;
    }
};

class AnalogWatch : public Watch {
private:
    bool dateTime;

public:
    AnalogWatch(string company, string model, double price, bool dateTime) : Watch(company, model, price) {
        cout << "AnalogWatch()" << endl;
        this->dateTime = dateTime;
    }

    void showWatch() {
        Watch::showWatch();
        cout << ", dateTime: " << (dateTime ? "Yes" : "No") << endl;
    }
};


int main() {
    AnalogWatch obj("Versace", "HELLENIUM-VK", 99400, 1);

    obj.showWatch();

    return 0;
}