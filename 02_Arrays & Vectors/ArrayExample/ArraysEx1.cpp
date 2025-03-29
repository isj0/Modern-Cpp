#include <iostream>
using namespace std;

int main() {


    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;

    // cin >> vowels[5];        // out of bounds - dont do this

    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first hi temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;            // replace the first element of hi_temps
    cout << "The first high temperature is now: " << hi_temps[0] << endl;

    //int test_scores [5];

    int test_scores [5] {0};         // initialize the array to avoid garbage value
    cout << "\n First score at index 0: " << test_scores[0] << endl;
    cout << "\n First score at index 1: " << test_scores[1] << endl;
    cout << "\n First score at index 2: " << test_scores[2] << endl;
    cout << "\n First score at index 3: " << test_scores[3] << endl;
    cout << "\n First score at index 4: " << test_scores[4] << endl;

    
    // read integers from console and store in the integer array
    cout << "\nEnter 5 test scores:";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\n First score at index 0: " << test_scores[0] << endl;
    cout << "\n First score at index 1: " << test_scores[1] << endl;
    cout << "\n First score at index 2: " << test_scores[2] << endl;
    cout << "\n First score at index 3: " << test_scores[3] << endl;
    cout << "\n First score at index 4: " << test_scores[4] << endl;

    cout << "Memory address of the location of the array: " << test_scores << endl;

    return 0;

}