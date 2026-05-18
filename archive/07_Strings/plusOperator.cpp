#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "Hello World";
    cout << s << endl;
    cout << "Length of string: " << s.length() << endl;
    cout << endl;
    s = s + " amazing";
    cout << s << endl;
    cout << "Length of string: " << s.length() << endl;


    cout << endl;
    return 0;
}