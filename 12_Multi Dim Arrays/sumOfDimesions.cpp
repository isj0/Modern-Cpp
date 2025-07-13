#include <iostream>
using namespace std;


int main() {

    int a[4][2] = {{1, 90}, {2, 87}, {4, 92}, {3, 73}};
    int sum = 0;
    

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";

            if (i == j) {
                cout << a[i][j] + a[j][i];
            }
        }
        cout << endl;
    }

    cout << endl;


    return 0;
}