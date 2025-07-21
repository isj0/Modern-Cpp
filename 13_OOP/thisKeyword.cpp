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

// void print(Cricketer c) {
//     cout << "Name: " << c.name << ", Runs: " << c.runs << ", Average: " << c.avg << endl;   
// }


int main() {

    Cricketer c1("Virat Kohli", 25000, 55.2);
    Cricketer c2("Rohit Sharma", 20000, 47.8);
    
    c1.print(10);
    c2.print(15);
    c1.name = "Shubhman Gill";
    c1.print(20);
    cout << "Virat match count: " << c1.matchCount() << endl;
    cout << "Rohit match count: " << c2.matchCount() << endl;

    cout << endl;
    return 0;
}