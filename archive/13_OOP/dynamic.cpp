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

};


int main() {

    Cricketer c1("Virat Kohli", 25000, 55.2);
    // Cricketer c1("Rohit Sharma", 20000, 45.7);

    // int* ptr = new int(524);        // dynamic memory allocation
    // cout << *ptr << endl;

    int* ptr = new int[10];
    cout << *ptr << endl;

    Cricketer* c2 = new Cricketer("Rohit Sharma", 20000, 45.7);

    cout << c1.name << ", " << c1.runs << endl;
    cout << c2->name << ", " << c2->runs << endl;

    cout << endl;
    return 0;
}