#include <iostream>
#include <vector>
using namespace std;

int main() {

    enum Direction {
        left, right, up, down
    };
    
    Direction heading {left};

    switch (heading) {

        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        case up:
            cout << "Going up" << endl;
            break;
        case down:
            cout << "Going down" << endl;
            break;
        default:
            cout << "OK" << endl;
            break;
    }
    
    return 0;
}