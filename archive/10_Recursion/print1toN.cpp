#include <iostream>
using namespace std;


void printN(int x, int n) {
    if (x > n) return;
    cout << x << endl;
    printN(x + 1, n);
}

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    printN(1, n);
}