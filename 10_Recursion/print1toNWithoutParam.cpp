#include <iostream>
using namespace std;


void printN(int n) {
    if (n == 0) return;         // base case
    printN(n-1);            // recursive case
    cout << n << endl;
}

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    printN(n);
}