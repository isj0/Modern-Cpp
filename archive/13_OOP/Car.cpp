#include <iostream>
using namespace std;

class Car {
public:
    string name;
    int price;
    int seats;
    string type;

    Car(int p, string n, int s, string t) {
        name = n; 
        price = p;
        seats = s;
        type = t;
    }

};

void print(Car c) {
    cout << c.name << ", " << c.price << ", " << ", " << c.seats << ", " << c.type << endl;   
}

// Pass by value
// void change(Car c) {
//     c.make = "Ferrari";
//     c.seats = 7;
// }

// Pass by reference
void change(Car& c) {
    c.name = "Audi";
    c.seats = 5;
}


int main() {

    // Car c1;
    // c1.name = "Honda";
    // c1.price = 40000;
    // c1.seats = 4;
    // c1.type = "Sedan";

    // Car c2;
    // c2.name = "Acura";
    // c2.price = 55000;
    // c2.seats = 5;
    // c2.type = "SUV";

    // print(c1);
    // cout << endl;
    // change(c1);     // Pass by Value here
    // print(c1);

    Car c3(75000, "BMW", 4, "Sedan");
    print(c3);

    cout << endl;
    return 0;
}