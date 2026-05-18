#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    fstream myFile;
    
    // Writing to a file

    // myFile.open("test.txt", ios::out);      // write mode
    // if(myFile.is_open()) {
    //     myFile << "Hello\n";
    //     myFile << "This is the second line\n";
    //     myFile.close();
    // }

    // myFile.open("test.txt", ios::app);      // write mode
    // if(myFile.is_open()) {
    //     myFile << "Hello2\n";
    //     myFile << "This is the another line\n";
    //     myFile.close();
    // }

    // Reading a file
    myFile.open("test.txt", ios::in);
    if(myFile.is_open()) {
        string line;

        while (getline(myFile, line)) {
            cout << line << endl;
        }

        myFile.close();
    }


    return 0;
}