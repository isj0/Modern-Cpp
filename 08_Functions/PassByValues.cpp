#include<iostream>
using namespace std;

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;


    return 0;
}