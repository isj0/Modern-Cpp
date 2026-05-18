#include <iostream>

using namespace std;

int main() {

    int num {};
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if (num >= min) {
        cout << "\n===========If statement 1============";
        cout << num << " is greater than " << min << endl;

        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max) {
        cout << "\n===========If statement 2============";
        cout << num << " is less than " << min << endl;

        int diff {max - num};
        cout << num << " is " << diff << " lesses than " << max << endl;
    }

    return 0;

}