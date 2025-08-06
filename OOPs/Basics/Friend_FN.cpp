#include <iostream>
using namespace std;

class PrivateClass {
private:
    int data;

public:
    PrivateClass(int data) {
        this->data = data;
    }

    friend void getData(PrivateClass&);
};

void getData(PrivateClass& obj) {
    cout << obj.data << endl;
}

int main() {
    PrivateClass pvt(10);
    
    getData(pvt);

    return 0;
}