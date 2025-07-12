#include <iostream>
#include <string>

using namespace std;

int factorial(int x) {
    int f = 1;
    for (int i =1; i <= x; i++) {
        f *= i;
    }

    return f;
}

int main() {

    int n, r;
    cout << "Enter value for n: ";
    cin >> n;

    cout << "Enter value for r: ";
    cin >> r;

    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);

    int permutation = a / c;

    cout << "Factorial of "<< n << ": " << a << endl;
    cout << "Factorial of " << r << ": " << b << endl;
    cout << "Combination : "  << permutation << endl;


    return 0;
}
