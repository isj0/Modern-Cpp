#include <iostream>
#include <string>
using namespace std;

class Teacher {
// properties or attributes
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Constructor - non parameterized
    Teacher() {
        cout << "This is CSE department." << endl;
    }
    
    // Constructor - parameterized
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Construtor - copy
    Teacher(Teacher &orgObj) {         // pass by reference
        cout << "This is a custom copy Constructor." << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject  = orgObj.subject;
        this->salary = orgObj.salary;
    }

    
    // methods or member functions
    void changeDept(string newDept) {
        dept = newDept;
    }
    
    // setter method - set private values
    void setSalary(double s) {
        salary = s;
    }
    // getter method - get/return private values
    double getSalary() {
        return salary;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << getSalary() << endl;
    }

};


int main() {

    Teacher t1;
    t1.name = "Mr. Jones";
    t1.subject = "C++";
    //t1.dept = "CSE";
    t1.setSalary(100000);

    cout << "Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Salary: " << t1.getSalary() << endl;
    cout << endl;

    Teacher t2("Mr. Smith", "Java", "CSE", 100001);
    t2.getInfo();
    
    cout << endl;

    Teacher t3(t1);         // Copy constructor will be invoked
    t3.getInfo();
    
    cout << endl;

    return 0;
}