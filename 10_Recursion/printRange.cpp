#include <iostream>
using namespace std;


void printN(int x, int n) {
    if (x > n) return;
    cout << x << endl;
    printN(x + 1, n);
}

int main() {
    int x, n;
    cout << "Enter starting number : ";
    cin >> x;
    cout << "Enter where to end: ";
    cin >> n;
    
    printN(x, n);
}