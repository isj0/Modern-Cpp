#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> test_scores {100, 05, 99, 87, 88};

    cout << "Score 1: " << test_scores[0] << endl;
    cout << "Score 2: " << test_scores[1] << endl;
    cout << "Score 3: " << test_scores[2] << endl;
    cout << "Score 4: " << test_scores[3] << endl;
    cout << "Score 5: " << test_scores[4] << endl;    

    // another way to access vector elements is the .at method
    // vector_name.at(element_index)

    
    cout << "Score 1: " << test_scores.at(0) << endl;
    cout << "Score 3: " << test_scores.at(2) << endl;
    cout << "Score 4: " << test_scores.at(3) << endl;
    cout << "Score 2: " << test_scores.at(1) << endl;
    cout << "Score 5: " << test_scores.at(4) << endl;
    cout << "Score 0: " << test_scores.at(0) << endl;

    return 0;

}