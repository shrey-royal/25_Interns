#include<iostream>
#include<string>
using namespace std;

int main() {
    string mystr = "Hello, World!";

    // cout << mystr << endl;
    // cout << mystr.length() << endl;

    // cout << mystr.substr(7, 5) << endl;

    // int index = mystr.find(", ");
    // cout << index << endl;
    // if(index != string::npos) {
    //     cout << "found at index: " << index << endl;
    // } else {
    //     cout << "not found in the string." << endl;
    // }

    // mystr.replace(7, 5, "everyone");
    // cout << mystr << endl;

    // mystr.append("\nHave a nice day!");
    // cout << mystr << endl;

    // mystr.erase(6, 9);
    // cout << "'" << mystr << "'" << endl;

    // string anotherString = "Hello, World!";
    // int comparision = mystr.compare(anotherString);
    // cout << "Comparision: " << comparision << endl;
    // if(comparision == 0) {
    //     cout << "The strings are equal." << endl;
    // } else if(comparision < 0) {
    //     cout << "The first string is less than the second string." << endl;
    // } else {
    //     cout << "The first string is greater than the second string." << endl;
    // }

    // string tempString = "Goodbye!";
    // cout << "Before swapping - mystr: '" << mystr << "', tempString: '" << tempString << "'\n";
    // mystr.swap(tempString);
    // cout << "Before swapping - mystr: '" << mystr << "', tempString: '" << tempString << "'\n";

    // cout << "Size: " << mystr.size();

    // mystr.resize(50);
    // cout << "Size: " << mystr.size();

    char ch = mystr.at(12);
    cout << ch << endl;

    return 0;
}