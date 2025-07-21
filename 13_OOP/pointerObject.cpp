#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print(int runs) {
        cout << "Name: " << this->name << ", Runs: " << this->runs << ", Average: " << this->avg << endl;   
        cout << runs << endl;
    }

    int matchCount() {
        return runs / avg;
    }
    
};

void change(Cricketer* c) {
    //(*c).avg = 77.5;
    c->avg = 68.9;
}

int main() {

    Cricketer c1("Virat Kohli", 25000, 55.2);
    
    Cricketer* p1 = &c1;

    // cout << (*p1).name << endl;
    // (*p1).name = "Shuman Gill";
    // cout << (*p1).name << endl;

    cout << c1.avg << endl;
    change(&c1);
    cout << c1.avg << endl;
    p1->name = "Rishab Pant";
    cout <<  c1.name << endl;

    cout << endl;
    return 0;
}