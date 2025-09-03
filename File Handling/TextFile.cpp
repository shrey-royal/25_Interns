#include <iostream>
#include <fstream>  // ifstream + ofstream
using namespace std;

class TextFile {
    string fileName;
    fstream file;
public:
    TextFile(string file_name) {
        this->fileName = file_name;
    }

    //write file
    void writeFile() {
        file.open(fileName, ios::out);

        if (!file.is_open()) {
            cout << "Error opening " << fileName << " for writing!\n";
        } else {
            string line;

            cout << "Enter data: ";
            getline(cin, line);
            while(line != "~") {
                // file << line << endl;
                file.write(line.c_str(), line.size());
                file << endl;
                getline(cin, line);
            }
            cout << "Data written into " << fileName << " successfully!" << endl;
            file.close();
        }
    }

    //read file
    void readFile() {
        file.open(fileName, ios::in);

        if (!file.is_open()) {
            cout << "Error opening " << fileName << " for reading!\n";
        } else {
            string data;

            //line by line
            while(getline(file, data)) {
                cout << data << endl;
            }

            //word by word
            // while(file >> data) {
            //     cout << data << endl;
            // }

            cout << "\n--- EOF ---\n";
            file.close();
        }
    }
};

int main() {
    TextFile tf("abcd.txt");

    tf.writeFile();
    tf.readFile();

    return 0;
}