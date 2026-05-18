#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id;
    float gpa;
    int age;
    int scores[5];
};


int main() {

    Student s1;
    s1.name = "Super Man";
    s1.id = 001;
    //s1.gpa = 8.6;
    cout << "Enter GPA for 1st student: ";
    cin >> s1.gpa;

    Student s2;
    s2.name = "Batman";
    s2.id = 002;
    //s2.gpa = 8.9;
    cout << "Enter GPA for 2nd student: ";
    cin >> s2.gpa;
    
    cout << s1.name << ", Student ID: " << s1.id << ", GPA: " << s1.gpa << endl;
    cout << s2.name << ", Student ID: " << s2.id << ", GPA: " << s2.gpa << endl;

    cout << endl;
    return 0;
}