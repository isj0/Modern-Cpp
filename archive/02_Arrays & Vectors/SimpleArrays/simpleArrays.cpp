#include <iostream>
using namespace std;

int main() {

    // Element_type array_name [constant number of elements]
    
    // modern c++ initialization
    int test_scores [5] {100, 95, 99, 87, 88};
    cout << "test scores " << test_scores << endl;

    // init to 3,5 and remaining to 0
    int high_score_per_level [10] {3, 5};

    const int days_in_year {365};
    // init all to zero
    double high_temps [days_in_year] {0};

    // size of array automatically calculated
    double another_array [] {1.3, 2, 4, 5.6};


    return 0;
}