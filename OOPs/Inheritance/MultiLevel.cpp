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
        cout << ", dateTime: " << (dateTime ? "Yes" : "No");
    }
};

class SmartWatch : public AnalogWatch {
private:
    int batteryCapacity;

public:
    SmartWatch(string company, string model, double price, int batteryCapacity) : AnalogWatch(company, model, price, 1) {
        cout << "SmartWatch()" << endl;
        this->batteryCapacity = batteryCapacity;
    }

    void showWatch() {
        AnalogWatch::showWatch();
        cout << ", batteryCapacity: " << batteryCapacity << "mAh\n";
    }
};


int main() {
    AnalogWatch analogWatch("Versace", "HELLENIUM-VK", 99400, 1);
    analogWatch.showWatch();
    cout << endl;
    
    SmartWatch smartWatch("Samsung", "Galaxy Watch Ultra", 59999, 590);
    smartWatch.showWatch();
    cout << endl;

    return 0;
}