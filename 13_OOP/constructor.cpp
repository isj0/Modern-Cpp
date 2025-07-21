#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id;
    float gpa;
    int age;
    int scores[5];

    // Default Constructor - explicitly declared
    Student() {}

    // Parameterized Constructors
    Student(string s, int r, float g) {
        name = s;
        id = r;
        gpa = g;
    }
    Student (string s, int r) {
        name = s;
        id = r;
    }
    Student (string s) {
        name = s; 
    }
    Student (int r) {
        id = r;
    }
    Student(int r, float g, string s) {
        name = s;
        id = r;
        gpa = g;
    }

};

void print(Student s) {
    cout << s.name << ", Student ID: " << s.id << ", GPA: " << s.gpa << endl;  
}


int main() {

    Student s1("Batman", 101, 8.1);

    // s1.name = "Batman";
    // s1.id = 101;
    // s1.gpa = 8.1;

    Student s2;
    s2.name = "Catman";
    s2.id = 102;
    s2.gpa = 8.7;
    Student s3("Makdiman", 103);
    Student s4(104);
    Student s5;
    Student s6(105, 9.0, "Kabadiman");
    Student s7 = s1;        // Deep copy
    Student s8(s2);     // Copy Constructor - deep copy as well

    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
    print(s6);
    print(s7);
    s7.name = "Bijliman"; 
    print(s7);
    print(s8);
    s8.name = "Gadhaman";
    print(s8);

    cout << endl;
    return 0;
}