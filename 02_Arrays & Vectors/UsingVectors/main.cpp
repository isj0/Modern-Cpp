#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Vectors are object - Dynamic Array
    // Similar semantics and suntax as arrays
    // functions like sort, reverse, find can be applied on vectors
    // grow and shrink at run time

    // create empty vector
    vector <char> vowels1;
    vector <int> test_scores;

    // constructor initialization
    vector <char> vowels2 (5);

    // Initialization
    vector <char> vowels3 {'a', 'e', 'i', 'o', 'u'};
    vector <int> test_scores1 {100, 98, 89, 85, 93};
    vector <double> hi_temperatures (365, 80.0);


    return 0;

}