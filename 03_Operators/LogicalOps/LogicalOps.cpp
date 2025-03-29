#include <iostream>
#include <vector>

using namespace std;

int main() {

    int num;
    const int lower {10};
    const int upper {20};
    cout << boolalpha;

    // cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    // cin >> num;

    // Example 1: Check if the number is within boundary
    // bool within_bounds {false};
    // within_bounds = (num > lower && num < upper);
    // cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl; 

    // Example 2: Check if the number is outside the boundary
    // bool outside_bounds {false};
    // outside_bounds = (num < lower || num > upper);
    // cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl; 

    // Example 3: Check if the number is on the boundary
    // bool on_bounds {false};
    // on_bounds = (num == lower || num == upper);
    // cout << num << " is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << endl;
    
    // Example 4: To Dress up or not
    bool wear_coat {false};
    double temp {};
    int wind_speed {};
    
    const int wind_speed_for_coat {25};     // wind over this value requires a coat
    const double temp_for_coat {45};        // temp below this value requires a coat

    cout << "\nEnter the current temperature in (F) : ";
    cin >> temp;
    cout << "Enter wind speed in (mph) : ";
    cin >> wind_speed;

    return 0;

}