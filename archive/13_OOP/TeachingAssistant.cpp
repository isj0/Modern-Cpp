#include <iostream>
#include <string>
using namespace std;

class Person {

public:
    string name;
    int age;
};

class Student : public Person{

public:
    int rollno;

};

class Teacher : public Person{

public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {
public:
    string researchArea;

};

int main() {

    TA t1;
    //t1.name = "Bulbul";
    t1.rollno = 101;
    t1.salary = 500;

    //cout << "Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.salary << endl;

    cout << endl;
    return 0;
}