#include <iostream>
using namespace std;


int main() {

    int a[] = {10, 12, 33, 4, -5};
    int n = sizeof(a) / 4;
    int i = 0;
    int j = n - 1;

    cout << "Original Array" << endl;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    cout << endl;
    cout << "Reversed Array" << endl;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}