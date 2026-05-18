#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    int count = 0;

    cout << "Now enter a message: ";
    getline(cin, s);
    cout << s << endl;

    cout << "Length of string: " << s.length() << endl;

    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            s[i] = 'a';
        }
    }

    cout << "Updated String: " << s << endl;

    cout << endl;
    return 0;
}