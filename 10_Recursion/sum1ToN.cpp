#include <iostream>
using namespace std;


int sum1toN(int n) {

    if (n == 1) return 1;

    return n + sum1toN(n - 1);
}

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << sum1toN(n) << endl;


    return 0;
}