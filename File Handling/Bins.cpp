#include<iostream>
#include<fstream>
using namespace std;

class Student {
public:
    int id;
    char name[30];

    void input() {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(name, 30);
    }

    void display() const {
        cout << "ID: " << id << "\nName: " << name << endl;
    }
};

void writeToFile(const Student& s) {
    ofstream fout("students.dat", ios::binary | ios::app);
    
    if(!fout) {
        cerr << "Error opening file for writing..." << endl;
        return;
    }
    fout.write((const char*)&s, sizeof(s));
    fout.close();
}

void readFromFile() {
    ifstream fin("students.dat", ios::binary);
    if(!fin) {
        cerr << "Error opening file for reading..." << endl;
        return;
    }

    Student s;
    while(fin.read((char*)&s, sizeof(s))) {
        s.display();
        cout << "-----------------------\n";
    }
    fin.close();
}

int main() {
    Student s;
    char choice;

    // do {
    //     s.input();
    //     writeToFile(s);
    //     cout << "Add another student? (y/n): ";
    //     cin >> choice;
    // } while (choice == 'y' || choice == 'Y');

    cout << "\nStored Students:\n";
    readFromFile();

    return 0;
}