#include<iostream>
using namespace std;

int main() {

    int m;
    cout << "Enter length of star: ";
    cin >> m;
    int mid = (m/2) + 1;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            if (j == mid || i == mid) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }


    return 0;
}