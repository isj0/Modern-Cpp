#include <iostream>
#include <string>
using namespace std;


class Print{

public:

    void show(int x) {
        cout << "Integer: " << x << endl;
    }
    
    void show(char ch) {
        cout << "Char: " << ch << endl;
    }
};


int main() {

    Print p1;
    p1.show(101);
    p1.show('$');
    
    cout << endl;
    return 0;
}