#include <iostream>


using namespace std;


int main() {

    int arr[6] = {};

    for (int i = 0; i <= 5; i++) {
        int num;
        cout << "Enter a natural number: ";
        cin >> num;
        arr[i] = num*num;
    }

    for (int i = 0; i <= 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;


    return 0;
}