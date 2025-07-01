#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> vec {1, 4, 0, 5, 6};

    int count {0};
    bool flag {false};
    int n {};
    cout << "Enter a number: ";
    cin >> n;

    while (!flag && count < vec.size()) {

        if (vec[count] == n) {
            flag = true;
            cout << "The position of " << n << " is " << count << endl;
        }
        else {
            count++;
            cout << "OOps! " << n << " not in our list. :(" << endl;
        }
    }

    cout << count << endl;
    return 0;
}