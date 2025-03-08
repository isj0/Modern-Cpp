#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Example of a 2D- vector

    vector <vector <int>> movie_rating
    {
        {1,2,3,1},
        {1,2,3,2},
        {1,2,3,3}
        
    };

    cout << "Here are the movie ratings for reviewer 1 using array syntax " << endl;
    cout << movie_rating[0][0];
    cout << movie_rating[0][1];
    cout << movie_rating[0][2];
    cout << movie_rating[0][3];
    cout << "\n===================================" << endl;
    cout << "Here are the movie ratings for reviewer 2 using Vector syntax" << endl;
    cout << movie_rating.at(0).at(0);
    cout << movie_rating.at(0).at(1);
    cout << movie_rating.at(0).at(2);
    cout << movie_rating.at(0).at(3);
    
    return 0;

}