#include <iostream>
#include <string>

using namespace std;

int main() {

    int x = 3;
    int y = 3;
    int* p = &x;

    cout << "Using reference operator: " << &x << endl;
    cout << "Using reference operator: " << &y << endl;
    cout << "Using pointer variable: " << p<< endl;
    cout << "Value of variable: " << x << endl;
    cout << "Using dereferencing variable: " << *p << endl;
    
    return 0;
}