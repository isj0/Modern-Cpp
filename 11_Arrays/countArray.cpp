#include <iostream>
using namespace std;


int main() {

    int arr[] = {11, 2, 7, 5, 17, 3};
    int count = 0;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i < sizeof(arr)/4; i++) {
        if (arr[i] > num) count++;
    }

    cout << endl;
    
    cout << "Elements greater than " << num << ": " << count << endl;

    cout << endl;


    return 0;
}