#include <iostream>
#include <vector>
using namespace std;

int main() {

    int scores [] {100, 90, 97, 85};

    for (auto score : scores) {
        cout << score << endl;
    }

    return 0;
}