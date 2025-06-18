#include <iostream>
#include <string>

using namespace std;

void global_example();
void local_example(int x);
void static_local_example();

int num = 300;          // Glocal variable - declared outside any class or function

int main() {

    int num = 100;      // Local to main
    int num1 = 500;     // Local to main

    cout << "Local num is: " << num << " in main." << endl;

    {
        // create a new level of scope
        int num = 200;      // local to this inner block
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();


    return 0;
}

void global_example() {

    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;

}
void local_example(int x) {
    int num = 1000;     // local to local_example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl;
    num = x;
    cout << "Local num is: " << num << " in local_example - end" << endl;
    // num1 in main it not within scope - so it cant be used here.
}
void static_local_example() {
    // local to static_local example - static means retains its value between calls.
    static int num = 5000;
    cout << "\nLocal static num is: " << num << " in static_local_example -start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static_local example - end" << endl;
}