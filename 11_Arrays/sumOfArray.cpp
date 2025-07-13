#include <iostream>
using namespace std;


void sum(int arr[]) {
    
}

int main() {

    int arr[] = {1, 2, 3, 5};
    int sum = 0;
    
    for (int i = 0; i < sizeof(arr)/4; i++) {
        sum += arr[i];
    }

    cout << endl;
    
    cout << "Sum of the elements of array: " << sum << endl;

    cout << endl;


    return 0;
}