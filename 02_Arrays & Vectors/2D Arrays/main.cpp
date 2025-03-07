#include <iostream>
using namespace std;

int main() {

    // Element_Type array_name [dim1_size] [dime2_size];

    int movie_rating [3][4];

    cin >> movie_rating[0][0];
    cin >> movie_rating[0][1];
    cin >> movie_rating[0][2];
    cin >> movie_rating[0][3];
    cin >> movie_rating[1][0];
    cin >> movie_rating[1][1];
    cin >> movie_rating[1][2];
    cin >> movie_rating[1][3];
    cin >> movie_rating[2][0];
    cin >> movie_rating[2][1];
    cin >> movie_rating[2][2];
    cin >> movie_rating[2][3];
    

    cout << "\n========================";

    cout << movie_rating[0][0];
    cout << movie_rating[0][1];
    cout << movie_rating[0][2];
    cout << movie_rating[0][3];
    cout << movie_rating[1][0];
    cout << movie_rating[1][1];
    cout << movie_rating[1][2];
    cout << movie_rating[1][3];
    cout << movie_rating[2][0];
    cout << movie_rating[2][1];
    cout << movie_rating[2][2];
    cout << movie_rating[2][3];



    
    return 0;

}