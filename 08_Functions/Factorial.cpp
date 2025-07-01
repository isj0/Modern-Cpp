#include <iostream>
#include <string>

using namespace std;

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;       // base case
    return n * factorial(n - 1);     // recursive case
}


int main() {

    cout << factorial(3) << endl;
    cout << factorial(8) << endl;
    cout << factorial(12) << endl;

    return 0;
}
