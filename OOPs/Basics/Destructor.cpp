#include <iostream>
using namespace std;

class MyClass {
public:
    int size;
    char *arr = NULL;

    MyClass(int size) {
        cout << "Constructor called!" << endl;
        this->size = size;

        arr = (char *)malloc(this->size * sizeof(char));
        cout << "Enter characters: ";
        cin >> arr;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << ", ";
        }
        cout << endl;
    }

    // Destructor
    ~MyClass() {
        free(arr);
        arr = NULL;
        cout << "Destructor called!" << endl;
    }
};

void run() {
    MyClass obj(2);

    obj.display();
}

int main() {
    cout << "Before run()" << endl;
    
    run();
    run();
    run();

    cout << "After run()" << endl;

    return 0;
}