#include <iostream>
using namespace std;

int number {21};        // this is global variable

int main() {
    
    int age;

    // Issues with using unintialized variables
    cout << "Age is " << age << endl;
    
    // now the variable is initialized
    age = 10;
    cout << "Age is " << age << endl;

    //int number {25};

    cout << "Fav num =  " << number << endl;

    return 0;
}