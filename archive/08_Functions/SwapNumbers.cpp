#include<iostream>
using namespace std;

// void swap(int x, int y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

int main() {

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;


    return 0;
}