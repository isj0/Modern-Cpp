#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << boolalpha;
    // Determine whether you need to wear a coat based on temperature and wind speed
    bool wear_coat {false};
    double temp {};
    int wind_speed {};
    
    const int wind_speed_for_coat {25};     // wind over this value requires a coat
    const double temp_for_coat {45};        // temp below this value requires a coat

    cout << "\nEnter the current temperature in (F) : ";
    cin >> temp;
    cout << "Enter wind speed in (mph) : ";
    cin >> wind_speed;

    wear_coat = (temp < temp_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using 'OR' : " << wear_coat << endl;

    wear_coat = (temp < temp_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using 'AND' : " << wear_coat << endl;

    return 0;

}