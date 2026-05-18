#include <iostream>
#include <string>

using namespace std;


// int factorial(int n) {
//
//     if(n == 0) return 1;
//     else return n * factorial(n - 1);
// }

int sum_func(int n) {

    if (n == 0)
        return 0;
    else
        return n % 10 + sum_func(n / 10);
}

int main() {

    cout << sum_func(1234) << endl;
    cout << sum_func(5678) << endl;

    return 0;
}
