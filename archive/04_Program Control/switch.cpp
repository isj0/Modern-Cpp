#include <iostream>
#include <vector>
using namespace std;

int main() {

    char grade {};

    cout << "Enter letter grade you expect on the exam: ";
    cin >> grade;

    switch (grade) {
        case 'a':
        case 'A':
            cout << "you need 90 or above." << endl;
            break;
        case 'b':
        case 'B':
            cout << "you need 80 - 89." << endl;
            break;
        case 'c':
        case 'C':
                cout << "you need 70 - 79." << endl;
                break;
        case 'd':
        case 'D':
            cout << "you need 60 - 69." << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "Are you sure (Y/N)? ";
            cin >> confirm;

            if (confirm == 'y' || confirm == 'Y')
                cout << "OK I guess you didn't study." << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good, go study" << endl;
            else 
                cout << "Illegal choice" << endl;
            break;
        }
            
        default:
            cout << "Sorry, not a valid grade !" << endl;
            break;
    }
    
    return 0;
}