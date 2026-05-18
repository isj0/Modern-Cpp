#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

// double calc_cost(double base_cost, double tax_rate);
// double calc_cost(double base_cost, double tax_rate = 0.06);
double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");


int main() {

    double cost {0};
    // cost = calc_cost(200.0);        // will use the default value
    // cout << cost << endl;
    // cost = calc_cost(100.0, 0.08);      // will use the value of the argument passes no default
    // cout << cost << endl;

    cost = calc_cost(100, 0.08, 4.25);
    cout << fixed << setprecision(2);
    cout << "cost is: " << cost << endl;
    cost = calc_cost (100, 0.08);
    cout << "cost is: " << cost << endl;
    cost = calc_cost (200);
    cout << "cost is: " << cost << endl;
    cost = calc_cost ();
    cout << "cost is: " << cost << endl;            // will use all the default values
    cout << endl;
    greeting("John Doe", "Dr.", "M.D.");
    greeting("Jane Smith", "Professor", "Ph.D.");
    greeting("Bruce Wayne", "Dr.");
    greeting("Clark Kent");

    return 0;
}

// double calc_cost(double base_cost, double tax_rate) {
//     return base_cost += (base_cost * tax_rate);
// }

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix) {
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}