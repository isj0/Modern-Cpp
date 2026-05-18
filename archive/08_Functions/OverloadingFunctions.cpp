#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

int main() {

    print(100);
    print('A');     // character promoted to int
    print(123.5);
    print(123.3F);
    print("C-style string");
    string s {"C-style strings"};
    print(s);
    print("C-style string", s);
    vector<string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges);

    cout << endl;
    return 0;
}

void print(int num) {
    cout << "Printing int: " << num << endl;
}
void print(double num) {
    cout << "Printing double: " << num << endl;
}
void print(string s) {
    cout << "Printing string: " << s << endl;
}
void print(string s, string s2) {
    cout << "Printing string: " << s << " and " << s2 << endl;
}
void print(vector<string> v) {
    cout << "Printing vector of strings: ";
    for (auto s: v) {
        cout << s << " ";
    }
    cout << endl;
}
