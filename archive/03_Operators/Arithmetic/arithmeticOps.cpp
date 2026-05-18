#include <iostream>
#include <vector>

using namespace std;

int main() {

    
    int num1 {100};      
    int num2 {200};      
    double result {0};

    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    num1 = 10;
    num2 = 3;
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    cout << 5 / 10 << endl;
    cout << 5.0 / 10.0 << endl;

    return 0;

}