#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Example 1
    int counter {10};
    int result {0};
    // cout << "Post Increment Counter = " << counter++ << endl;
    // cout << "Post Increment Counter = " << counter++ << endl;
    // cout << "Pre Increment Result = " << ++result << endl;

    // Example 2
    // counter = 10;
    // result = 0;
    // cout << "Counter = " << counter << endl;
    // cout << "Result = " << result << endl;
    // result = counter++;
    // cout << "Counter = " << counter << endl;
    // cout << "Result = " << result << endl;

    // Example 3
    // counter = 10;
    // result = 0;
    // cout << "Counter = " << counter << endl;
    // cout << "Result = " << result << endl;
    // result = ++counter + 10;
    // cout << "Counter = " << counter << endl;
    // cout << "Result = " << result << endl;

    // Example 4
    counter = 10;
    result = 0;
    cout << "Counter = " << counter << endl;
    cout << "Result = " << result << endl;
    result = counter++ + 10;
    cout << "Counter = " << counter << endl;
    cout << "Result = " << result << endl;


    return 0;

}