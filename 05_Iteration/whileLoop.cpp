#include <iostream>
#include <vector>
using namespace std;

int main() {

    int num {};
    // cout << "Enter a positive integer - start the countdown:";
    // cin >> num;
    //
    // while (num > 0) {
    //     cout << num << endl;
    //     --num;
    // }
    // cout << "Blastoff !" << endl;

    bool done {false};
    int number {0};

    while (!done) {
        cout << "Enter a number between 1 and 5: ";
        cin  >> num;

        if (num <= 1 || num >= 5) {
            cout << "Out of range, try again !" << endl;
        }
        else {
            cout << "Thanks" << endl;
        }
        done = true;
    }

    cout << "number entered: " << num << endl;


    return 0;
}