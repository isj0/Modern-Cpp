#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);
void pass_by_value(int num);

int main() {

    int num {10};
    int another_num {20};

    cout << "Num before calling pass_by_value: " << num << endl;
    pass_by_value(num);
    cout << "Num after calling pass_by_value: " << num << endl;
    cout << endl;

    cout << "Num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "Num after calling pass_by_ref1: " << num << endl;
    cout << endl;

    cout << "Another number before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "Another Num after calling pass_by_ref1: " << another_num << endl;
    cout << endl;

    string name {"Frank"};
    cout << "Name before calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "Name after calling pass_by_ref2: " << name << endl;
    cout << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "Stooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << endl;

    pass_by_ref3(stooges);
    cout << "Stooges after calling pass_by_ref3: ";
    print_vector(stooges);

    cout << endl;
    return 0;
}

void pass_by_value(int num) {
    num = 0;
}
void pass_by_ref1(int &num) {
    num = 1000;
}

void pass_by_ref2(string &s) {
    s = "Changed";
}

void pass_by_ref3(vector<string> &v) {
    v.clear();
}
void print_vector(const vector<string> &v) {
    for (auto s: v)
        cout << s << " ";
    cout << endl;
}