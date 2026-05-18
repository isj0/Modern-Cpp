#include <iostream>
#include <string>

using namespace std;

int main() {


    string s1 {"This is a test"};

    cout << s1.substr(0, 4) << endl;
    cout << s1.substr(5, 2) << endl;
    cout << s1.substr(10, 4) << endl;

    string s1;
    // cout << "Enter a sentence: ";
    // cin >> s1;
    // cout << s1 << endl;
    // cout << "Enter the same sentence: ";
    // getline(cin, s1);
    // cout << s1 << endl;
    cout << "Enter the same sentence: ";
    getline(cin, s1, 'x');
    cout << s1 << endl;
}