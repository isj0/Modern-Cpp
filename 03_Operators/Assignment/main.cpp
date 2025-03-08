#include <iostream>
#include <vector>

using namespace std;

int main() {

    
    int num1 {10};      // this is initialization
    int num2 {20};      // this is initialization - not assignment
    cout << "num1 is now: " << num1 << endl;
    cout << "num2 is now: " << num2 << endl;

    num1 = 100;     // this is assignment
    cout << "num1 is now: " << num1 << endl;
    cout << "num2 is now: " << num2 << endl;

    num1 = num2;
    cout << "num1 is now: " << num1 << endl;

    num1 = num2 = 1000;
    cout << "num1 is now: " << num1 << endl;
    cout << "num2 is now: " << num2 << endl;

    return 0;

}