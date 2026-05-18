#include <iostream>
using namespace std;


int main() {

    // const double pi {3.1415926};
    // cout << "PI = " << pi << endl;

    cout << "Hello, Welcome to carpet cleaning services !" << endl;
    

    

    const double price_per_small_room {25.00};
    const double price_per_large_room {35.00};
    const double sales_tax {0.06};
    const int expiry {30};      // days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "=============================================" << endl;

    cout << "How many small rooms would you like to be cleaned? ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "How many large rooms would you like to be cleaned? ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;

    cout << "Price per small room:$" << price_per_small_room << endl;
    cout << "Price per large room:$" << price_per_large_room << endl;

    double cost = (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms);
    cout << "Cost:$" << cost << endl;

    double tax =  cost * sales_tax;
    cout << "Tax: $" << tax << endl;
    cout << "========================================" << endl;

    double total = cost + tax;
    cout << "Total estimate: $" <<  total << endl;
    cout << "This estimate is valid for "<< expiry << " days" << endl;


    return 0;
}