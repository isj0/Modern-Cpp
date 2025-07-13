#include <iostream>
using namespace std;

int main() {

    // intialiazing & declaring arrays
    int arr[] = {};

    int nums[] = {1, 4, 3, 7, 6, 9};

    // for (int i = 0; i <= 4; i++) {
    //     cout << "Enter a num: ";
    //     cin >> arr[i];
    // }

    // for (int i = 0; i <= 4; i++) {

    //     cout << arr[i] << ", ";
    // }

    cout << endl;

    // printing array
    for (int i = 0; i <= 4; i++) {

        cout << nums[i] << ", ";
    }

    cout << endl;

    // printing reverse array
    for (int i = 4; i >= 0; i--) {

        cout << nums[i] << ", ";
    }

    cout << endl;

    
    return 0;
}