#include <iostream>
using namespace std;

int main() {

    // character type
    char middle_initial {'S'};
    cout << "My middle initial is " << middle_initial << endl;

    // Integer types
    unsigned short int exam_score {73};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {110};
    cout << "Number of countries represented in the meeting " << countries_represented << endl;

    long population {1234567890};
    cout << "People in New York " << population << endl;

    // example of an overflow
    long world_pop = 7600000000;
    cout << "People in the world " << world_pop << endl;

    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "Distance of alpha centauri is " << distance_to_alpha_centauri << endl;

    // Floating point types
    float car_payments {401.23};
    cout << "My car payment is " << car_payments << endl;

    double pi {3.141591234567};
    cout << "Value of pi is " << pi << endl;

    long double large_amount {2.7e120};
    cout << "Example of a very large number" << large_amount << endl;

    // Boolean types
    bool game_over {false};
    cout << "Is the game over? " << game_over << endl;

    // overflow example
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};
    cout << "The product of " << value1 << "*" << value2 << "= " << product << endl;

    return 0;
}