// Compare integers using if statements,

#include <iostream>     // enables program to perform input and output

using std::cout;        // enables cout
using std::cin;

// funtion main begins program execution
int main() {

    int number1{0};     // initialize the first integer to 0
    int number2{0};     // initialize the second integer to 0

    cout << "Enter two integers to compare: ";      // prompt user for data
    cin >> number1 >> number2;                      // read two integers from user

    if (number1 == number2) {
        cout << number1 << " == " << number2 << std::endl;
    }
    if (number1 != number2) {
        cout << number1 << " != " << number2 << std::endl;
    }
    if (number1 < number2) {
        cout << number1 << " < " << number2 << std::endl;
    }
    if (number1 > number2) {
        cout << number1 << " > " << number2 << std::endl;
    }

    return 0;

}
