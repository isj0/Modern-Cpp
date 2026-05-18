#include <iostream>
using namespace std;


int main() {

    int data[4][2] = {{1, 90}, {2, 87}, {4, 92}, {3, 73}};
    

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;


    return 0;
}