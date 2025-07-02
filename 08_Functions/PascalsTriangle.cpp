#include<iostream>
using namespace std;

// hint :- the element is the combination of the row and column
int factorial(int x) {
    int f = 1;
    for (int i =1; i <= x; i++) {
        f *= i;
    }

    return f;
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}


int main() {

    int m;
    cout << "Enter height of triangle: ";
    cin >> m;

    for (int i = 0; i <= m; i++) {
        for (int k = 0; k <= m - i-1; k++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << "  ";
        }
        cout << endl;
    }

    return 0;
}