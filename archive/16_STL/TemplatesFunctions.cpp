#include <iostream>
#include <string>
using namespace std;

// int addInt(int a, int b) {
//     return a + b;
// }

// float addFloat(float a, float b) {
//     return a + b;
// }

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T subtract(T a, T b) {
    return a - b;
}

int main() {

    // cout << addInt(5, 7) << endl;
    // cout << addFloat(5.3, 7.1) << endl;

    cout << add(5, 6) << endl;
    cout << add(5.4, 6.3) << endl;

    cout << subtract(5, 7) << endl;
    cout << subtract(15.3, 7.9) << endl;

    return 0;
}