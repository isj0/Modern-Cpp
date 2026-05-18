#include <iostream>
#include <climits>

using namespace std;


int main() {

    int a[4][2] = {{1, 90}, {2, 87}, {4, 92}, {3, 73}};
    int prod = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
            prod *= a[i][j];
        }
        cout << endl;
    }

    cout << "Sum of all elements : " << prod << endl;

    cout << endl;

    return 0;
}