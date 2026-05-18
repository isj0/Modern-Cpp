#include <iostream>
#include <string>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return 1;       // base case
    return fibonacci(n - 1) + fibonacci(n - 2);     // recursive case
}


int main() {


    cout << fibonacci(5) << endl;
    cout << fibonacci(10) << endl;
    cout << fibonacci(35) << endl;

    return 0;
}
