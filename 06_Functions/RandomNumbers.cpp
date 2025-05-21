
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int random_number {};
    size_t count {10};      // number of random number to generate
    int min {1};        // lower bound
    int max {6};        // upper bound

    // seed random number generator
    // if you dont seed the generator you will get the same sequence of random numbers

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i {1}; i <= count; ++i) {
        random_number = rand() % max + min;     // generate random number in the range of [min, max]
        cout << random_number << endl;
    }

    cout << endl;

    return 0;
}