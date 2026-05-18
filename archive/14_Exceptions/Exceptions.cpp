#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Printer {
    string _name;
    int _availablePaper;

public:
    Printer(string name, int paper) {
        _name = name;
        _availablePaper = paper;
    }

    void Print(string txtDoc) {

        int requiredPaper = txtDoc.length() / 10;

        if (requiredPaper > _availablePaper)
            throw 101;

        cout << "Printing..." << txtDoc << endl;
        _availablePaper -= requiredPaper;
    }

};


int main() {

    Printer myPrinter("HP Deskjet 1234", 10);
    try {
        myPrinter.Print("Hello, my name is Test. Iam just a program.");
        myPrinter.Print("Hello, my name is Test. Iam just a program.");
        myPrinter.Print("Hello, my name is Test. Iam just a program.");
    }
    catch (const char * txtException) {
        cout << "Exception: " << txtException << endl;
    }
    // catch (int exCode) {
    //     cout << "Exception: " << exCode << endl;
    // }
    catch (...) {
        cout << "Exception Happened" << endl;
    }

    return 0;
}