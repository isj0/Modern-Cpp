#include <iostream>
using namespace std;


int main() {

    int arr[] = {1, 2, 3, 5};
    int prod = 1;
    
    for (int i = 0; i < sizeof(arr)/4; i++) {
        prod *= arr[i];
    }

    cout << endl;
    
    cout << "Sum of the elements of array: " << prod << endl;

    cout << endl;


    return 0;
}