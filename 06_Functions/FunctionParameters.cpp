
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// Function prototypes
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();
}

void print_vector(vector<string> v) {
    for (auto s: v) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {

    int num {10};
    int another_num {20};

    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after pass_by_value1: " << num << endl;

    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after pass_by_value1: " << another_num << endl;

    string name {"Frank"};
    cout << "\nName before calling pass_by_vale2: " << name << endl;
    pass_by_value2(name);
    cout << "\nName after pass_by_vale2: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_vale3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "\nstooges after pass_by_vale3: ";
    print_vector(stooges);

    cout << endl;


    return 0;
}
