#include <iostream>
#include <string>
using namespace std;


class Parent{

public:
    void getInfo() {
        cout << "Parent class\n";
    }

    virtual void hello() {
        cout << "Hello from Parent\n";
    }

};

class Child : public Parent{

public:
    void getInfo() {
        cout << "Child class\n";
    }

    void hello() {
        cout << "Hello from Child\n";
    }

};

int main() {

    Child c1;
    c1.hello();

    Parent p1;
    p1.hello();


    cout << endl;
    return 0;
}