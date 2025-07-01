#include <iostream>
#include <vector>
using namespace std;

int main() {


    char choice {};

    do {
        cout << "\n-------------------------------" << endl;
        cout << "1. Calculus" << endl;
        cout << "2. Linear Algebra" << endl;
        cout << "3. PreCalculus" << endl;
        cout << "q or Q. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1')
            cout << "You choose code 1: do Calculus" << endl;
        else if (choice == '2')
            cout << "You choose code 2: do Linear Algebra" << endl;
        else if (choice == '3')
            cout << "You choose code 3: PreCalculus" << endl;
        else if (choice == 'q' || choice == 'Q')
            cout << "Good Bye!" << endl;
        else
            cout << "Unknowm Option selected" << endl;

    } while (choice != 'q' && choice != 'Q');

    cout << endl;

    return 0;
}