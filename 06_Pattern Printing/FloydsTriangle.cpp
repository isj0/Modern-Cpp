#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter height of triangle: ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }

    return 0;
}