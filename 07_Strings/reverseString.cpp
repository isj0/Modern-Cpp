#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s = "Hello World";
    int n = s.length();
    cout << endl;

    // int i = 0;
    // int j = n-1;
    // while (i < j) {
    //     int temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }

    // cout << "Reversed String: " << s << endl;

    reverse(s.begin(), s.end());

    cout << s << endl;


    cout << endl;
    return 0;
}