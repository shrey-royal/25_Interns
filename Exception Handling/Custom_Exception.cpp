#include<iostream>
using namespace std;

const int speedLimit = 100;

class OverspeedingException : public exception {
    const char* error_msg = "";
public:
    OverspeedingException(const char* msg) : exception() {
        this->error_msg = msg;
    }

    const char* what() const noexcept override {
        return error_msg;
    }
};

class Bike {
    int speed;
public:
    Bike(int speed) {
        setSpeed(speed);
    }

    int getSpeed() {
        return speed;
    }

    void setSpeed(int speed) {
        if (speed <= speedLimit) {
            this->speed = speed;
        } else {
            throw OverspeedingException("overspeeding is not possible!");
        }
    }
};


int main() {
    Bike splendor(30);

    cout << splendor.getSpeed() << endl;
    try {
        splendor.setSpeed(110);
    }
    catch(const exception& e) {
        cerr << e.what() << endl;
    }
    
    cout << splendor.getSpeed() << endl;

    return 0;
}
