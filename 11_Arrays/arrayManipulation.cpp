#include <iostream>


using namespace std;


int main() {

    int arr[7] = {};

    for (int i = 0; i <= 6; i++) {
        int num;
        cout << "Enter a natural number: ";
        cin >> num;
        arr[i] = num;
    }

    cout << endl;

    for (int i = 0; i <= 6; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i <= 6; i++) {
        if (i % 2 == 0) {
            arr[i] = arr[i] + 10;
        }
        else {
            arr[i] = 2 * arr[i];
        }
    }

    cout << "******** Updated Array *********" << endl;

    for (int i = 0; i <= 6; i++) {
        cout << arr[i] << " ";
    }



    cout << endl;


    return 0;
}