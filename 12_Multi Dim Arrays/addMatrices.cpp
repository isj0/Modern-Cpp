#include <iostream>
using namespace std;


int main() {

    int a[3][3] = {{}, {}, {}};
    int b[3][3] = {{}, {}, {}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = 10;
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            b[i][j] = 7;
        }
        cout << endl;
    }

    cout << "Matrix A" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix B" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Now adding both matrices" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    return 0;
}