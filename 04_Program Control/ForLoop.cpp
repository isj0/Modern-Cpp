// ForLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*for (int i{ 1 }; i <= 20; ++i) {
        cout << i << endl;
    }*/

    /*for (int i{ 1 }; i <= 10; i += 2) {
        cout << i << endl;
    }*/

    // for (int i{ 10 }; i > 0; --i) {
    //     cout << i << endl;
    // }

    // for (int i{1}, j{5}; i<= 5; ++i, ++j) {
    //     cout << i << " + " << j << " = " << (i + j) << endl;
    // }

    // vector <int> nums {10, 20, 30, 40, 50};

    // for (int i{0}; i < nums.size(); ++i) {
    //     cout << nums[i] << endl;
    // }

    int sum {0};
    
    for (int i{1}; i< 15; ++i) {
        if (i / 2 != 0) {
            sum += i;

            cout << i << endl;
        }

    }
    cout << sum << endl;


    return 0;
}

