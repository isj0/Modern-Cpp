#include <iostream>
#include <climits>

using namespace std;


int main() {

    int arr[] = {1, 2, 13, 5, 0, 7};
    // int mx = arr[0];
    // int mn = arr[0];

    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < sizeof(arr)/4; i++) {
        //if (arr[i] > mx) mx = arr[i];
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }

    cout << endl;
    
    cout << "Max of the elements of array: " << mx << endl;
    cout << "Min of the elements of array: " << mn << endl;

    cout << endl;


    return 0;
}