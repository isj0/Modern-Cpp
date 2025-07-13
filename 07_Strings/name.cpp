#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    // cout << "Enter a word: ";
    // cin >> s;
    // cout << s << endl;

    cout << "Now enter a message: ";
    getline(cin, s);
    cout << s << endl;

    s[0] = 'J';
    s[6] = 'M';

    cout << s << endl;

    cout << endl;
    return 0;
}