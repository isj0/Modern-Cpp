#include <iostream>
using namespace std;

int main() {

    // array_name [element_index]

    int test_scores [5] {100, 95, 99, 87, 88};

    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << test_scores[4] << endl;
    cout << test_scores[3] << endl;
    cout << test_scores[2] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[0] << endl;

    return 0;

}