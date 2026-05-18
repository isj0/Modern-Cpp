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
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }

    cout << "vowel count: " << count << endl;

    cout << endl;
    return 0;
}