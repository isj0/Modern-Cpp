#include <iostream>
#include <string>
using namespace std;


class Person {
public:
    string name;
    int age;

    // Person(string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }

    // // Constructor
    // Person() {
    //     cout << "Parent Constructor.\n";

    // }

    // // Destructor
    // ~Person() {
    //     cout << "Parent Destructor\n";
    // }

};

class Student : public Person{

public:
    int rollno;

    // Student(string name, int age, int rollno) : Person(name, age) {
    //     cout << "Child Constructor\n";
    //     this->rollno = rollno;
    // }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll no:" << rollno << endl;        
    }

    // // Destructor
    // ~Student() {
    //     cout << "Child Destructor\n";
    // }

};

class GradStudent : public Student {
public:
    string researchArea;

};

int main() {


    // Student s1("ChulBul", 8, 101);
    // s1.getInfo();

    GradStudent gs1;
    gs1.name = "Tony Stark";
    gs1.age = 21;
    gs1.rollno = 201;
    gs1.researchArea = "Quantum Physics";
    cout << "Name: " << gs1.name << endl;
    cout << "Research Area: " << gs1.researchArea << endl;


    gs1.getInfo();

    cout << endl;
    return 0;
}