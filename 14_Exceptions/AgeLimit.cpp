#include <iostream>
#include <string>
using namespace std;



int main() {

    cout << "Enter your age: ";
    int age;
    cin >> age;

    try {
        if (age >= 24) {
            cout << "You are allowed to access to this area.\n";
        }
        else {
            throw (age);
        }
    }

    catch (int age) {
        cout << "Age restricted.\n";
        cout << "Your age is " << age << endl;
    }
    

    return 0;
}