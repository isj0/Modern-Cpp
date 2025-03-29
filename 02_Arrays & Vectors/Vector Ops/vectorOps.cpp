#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> vector1;
    vector <int> vector2;

    // adding elements to vector 1
    vector1.push_back(10);
    vector1.push_back(20);
    
    // display contents of vector 1
    cout << vector1.at(0) << endl;;
    cout << vector1.at(1) << endl;
    cout << "Size of the vector 1: " << vector1.size() << endl;

    // adding elements to vector 2
    vector2.push_back(100);
    vector2.push_back(200);

    // display contents of vector 2
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Size of the vector 2: " << vector2.size() << endl;

    // create a 2D vector
    vector <vector <int>> vector_2d;

    // adding vectors to the 2D vector
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "Size o the 2D vector is: " << vector_2d.size() << endl;

    cout << "Here is vector 1: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << "Here is vector 2: " << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    // change the elements of the vector - test again
    vector1.at(0) = 10000;
    cout << vector1.at(0) << endl;
    cout << "Here is vector 1: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;

    return 0;

}