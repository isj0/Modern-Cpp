#include <iostream>
using namespace std;


void printN(int n) {
    if (n == 0) return;         // base case
    cout << n << endl;
    printN(n-1);            // recursive case
}

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    printN(n);
}