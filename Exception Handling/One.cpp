#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0) {
        // cout << "inf" << endl;
        throw invalid_argument("Can't divide by zero!");
    } else {
        cout << a/b << endl;
    }
}

int main() {
    string str = "Hello";
    cout << "Before Exception" << endl;

    // try {
    //     cout << str.at(8) << endl;
    //     divide(12, 0);
    // } catch (const invalid_argument& e) {
    //     cerr << e.what() << endl;
    // } catch (const out_of_range& e) {
    //     cerr << e.what() << endl;
    // }

    
    try {
        cout << str.at(8) << endl;
        divide(12, 0);
    } catch (...) {
        cerr << "Exception Occurred!" << endl;
    }
    
    cout << "After Exception" << endl;

    return 0;
}