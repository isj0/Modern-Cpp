#include <iostream>

using namespace std;

int main() {

    int x = 3;
    int* ptr = &x;

    cout << "Value of variable: " << x << endl;
    cout << "Using dereferencing variable: " << *ptr << endl;

    x = 10;
    cout << "Value of variable: " << x << endl;
    cout << "Using dereferencing variable: " << *ptr << endl;

    *ptr = 12;
    cout << "Value of variable: " << x << endl;
    cout << "Using dereferencing variable: " << *ptr << endl;
    
    return 0;
}