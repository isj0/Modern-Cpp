#include <iostream>
using namespace std;


void change(int arr[]) {
    arr[0] = 10;
}
int main() {

    int arr[] = {1, 2, 3};
    
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    change(arr);

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;


    return 0;
}