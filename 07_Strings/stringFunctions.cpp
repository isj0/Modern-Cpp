#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "Hello World";

    // cout << s << endl;
    // s.push_back('y');
    // cout << s << endl;

    // s.pop_back();
    // cout << s << endl;

    // s.pop_back();
    // cout << s << endl;

    cout << s << endl;
    s.append(" amazing");
    cout << s << endl;
    
    s.clear();
    cout << s << endl;

    cout << "Length of string after clearing it: " << s.length() << endl;

    cout << endl;
    return 0;
}