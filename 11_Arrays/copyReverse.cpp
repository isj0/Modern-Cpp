#include <iostream>
using namespace std;


int main() {

    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / 4;

    int brr[n];

    for (int i = 0; i < n; i++) {
        int j = n - 1 - i;
        brr[i] = arr[j];
        cout << brr[i] << " ";
    }

    cout << endl;


    return 0;
}