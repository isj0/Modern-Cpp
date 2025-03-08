#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Convert EUR to USD
    const double usd_per_euro {1.19};
    
    cout << "Welcome to the Currency Converter !" << endl;
    cout << "Enter the value in EUROS: ";
    double euros {0.0};
    double dollars {0.0};

    cin >> euros;
    dollars = euros * usd_per_euro;
    cout << euros << " EUROS is equivalent to " << dollars << " dollars." << endl;

    cout << endl;

    return 0;

}