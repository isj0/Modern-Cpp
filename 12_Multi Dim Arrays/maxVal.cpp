#include <iostream>
#include <climits>

using namespace std;


int main() {

    int a[4][2] = {{1, 90}, {2, 87}, {4, 92}, {3, 73}};

    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            mx = max(mx, a[i][j]);
        }
        cout << endl;
    }

    cout << endl;

    cout << "Max element is: " << mx << endl;

    cout << endl;

    return 0;
}