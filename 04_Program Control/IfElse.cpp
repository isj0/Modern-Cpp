// Compare integers using if statements,

#include <iostream>     // enables program to perform input and output
using namespace std;

// funtion main begins program execution
int main() {

    int num{};     // initialize the first integer to 0
    const int target {10};

    cout << "Enter a number and I'll compare it to " << target << ": ";      // prompt user for data
    cin >> num;    

    if (num >= target) {
        cout << "\n==========================" << endl;
        cout << num << " is greater than or equal to " << target << endl;
        int diff {num - target};
        cout << num << " is " << diff << " greater than " << target << endl;
    }
    else {
        cout << num << " is less than " << target << endl;
        int diff {target - num};
        cout << "\n==============================" << endl;
        cout << num << " is " << diff << " less than " << target << endl;

    }

    cout << endl;

    return 0;

}
