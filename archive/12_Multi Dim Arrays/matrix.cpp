#include <iostream>
using namespace std;


int main() {

    int a[2][3];
    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;
    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;

    for (int i = 0; i <2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    return 0;
}