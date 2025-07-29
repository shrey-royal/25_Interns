#include <iostream>
using namespace std;

int main() {
    // int data;
    // cout << "\nEnter any data: ";
    // cin >> data;
    // cout << "data: " << data << endl;
    
    // int a, b;
    // cout << "Enter a, b: ";
    // cin >> a >> b;
    // cout << "A = " << a << ", B = " << b << endl;

    // string datatype (derived)
    string name;
    // char name[10];  // length = 9 -> last character must be NULL

    cout << "Enter your name: ";
    // cin >> name;
    getline(cin, name); //src (cin) -> dest (name)  // one line
    // cin.getline(name, 10);

    // cout << "Your name is " << name << endl;
    // int i=0;
    // while(name[i] != '\0') {
    //     cout << name[i++] << ", ";
    // }
    // cout << endl;


    for(char c : name) {    //for-each loop
        cout << "'" << c << "', ";
    }
    cout << "\b\b \n";

    int a[] = {1, 2, 3, 2, 1};

    for (int i : a) {
        cout << i << ", ";
    }
    cout << "\b\b \n";

    cout << name << "'s length is " << name.length();

    return 0;
}