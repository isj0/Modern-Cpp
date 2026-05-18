#include<iostream>
using namespace std;

// void swap(int x, int y) {
//     x = x + y;
//     y = x - y;
//     x = x - y;
// }

int main() {

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << a << " " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b << endl;


    return 0;
}