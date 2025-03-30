#include <iostream>
using namespace std;
#include <iomanip>


int main(){

    int length{}, width {}, height{};
    double base_cost{2.50};

    const int tier1_threshold {100};    // volume
    const int tier2_threshold {500};    // volume

    int max_dimension_length {10};      // inches

    double tier1_surcharge {0.10};       // 10% extra
    double tier2_surcharge {0.25};      // 25% extra
    
    // all dimensions must be 10 inches or less

    int package_volume{};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;

    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        cout << "Sorry, package rejected- dimensions exceeded" << endl;
    } else {
        double package_cost {0};
        package_volume = length * width * height;
        package_cost = base_cost;
        
        if (package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            cout << " adding tier2 surcharge" << endl;
        } else if (package_volume > tier1_threshold) {
            package_cost += package_cost * tier1_surcharge;
            cout << " adding tier1 surcharge" << endl;
        }
        cout << fixed << setprecision(2);
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "You package will cost $" << package_cost << " to ship." << endl;
    }


    cout << endl;

    return 0;
}