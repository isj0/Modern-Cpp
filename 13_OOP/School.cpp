#include <iostream>
#include <string>
using namespace std;


class Student{

public:
    string name;
    //int rollno;

    Student() {
        cout << "Non parameterized constructor\n";
    }

    Student(string name) {
        this->name = name;
        cout << "Parameterized Constructor\n";
    }

};


int main() {

    Student s1("Bulbul");
    s1.name = "Chulbul";
    
    cout << endl;
    return 0;
}