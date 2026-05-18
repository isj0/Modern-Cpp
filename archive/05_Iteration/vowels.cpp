#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<char> v {'h', 'z', 'x', 'c', 's'};
    int index = 0;
    bool flag = false;

    do {
        if (v[index] == 'e') {
            cout << "Vowel found: " << v[index] << endl;
            flag = true;
        }
        else if (v[index] == 'a') {
            cout << "Vowel found: " << v[index] << endl;
            flag = true;
        }
        else if (v[index] == 'i') {
            cout << "Vowel found: " << v[index] << endl;
            flag = true;
        }
        else if (v[index] == 'o') {
            cout << "Vowel found: " << v[index] << endl;
            flag = true;
        }
        else if (v[index] == 'u') {
            cout << "Vowel found: " << v[index] << endl;
            flag = true;
        }
        else {
            index++;
        }

    } while (index < v.size() && !flag);

    cout << "Size of index "<< index << endl;

    if (index == v.size()) {
        cout << "Vowel not found." << endl;
    }
    return 0;
}