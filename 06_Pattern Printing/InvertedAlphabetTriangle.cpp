#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter height of triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n+1) - i; j++) {
            cout << (char) (j+64) << " ";
        }
        cout << endl;
    }

    return 0;
}