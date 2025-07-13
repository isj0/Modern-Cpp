#include <iostream>


using namespace std;


int main() {

    int arr[7] = {};
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i <= 6; i++) {
        int num;
        cout << "Enter a natural number: ";
        cin >> num;
        arr[i] = num;

        if (i % 2 == 0){
            sumEven += arr[i];
        }

        else {
            sumOdd += arr[i];
        }
    }

    cout << endl;

    for (int i = 0; i <= 6; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Sum of elements at even indices: " << sumEven << endl;
    cout << "Sum of elements at ODD indices : " << sumOdd << endl;

    cout << endl;


    return 0;
}