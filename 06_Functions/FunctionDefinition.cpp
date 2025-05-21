
#include <iostream>
#include <cmath>

using namespace std;

const double PI {3.14159};

double calc_area_circle(double radius) {
    return PI * radius * radius;
}
void area_circle() {
    double radius;
    cout << "\nEnter the radius of circle: ";
    cin >> radius;
    cout << "Area of the circle " << "with radius " << radius << " is: " << calc_area_circle(radius) << endl;
}

double calc_volume_cylinder(double radius, double height) {
    return PI * radius * radius * height;
}
void volume_cylinder() {
    double height;
    double radius;
    cout << "\nEnter the height of cylinder: ";
    cin >> height;
    cout << "Enter the radius of cylinder: ";
    cin >> radius;
    cout << "Volume of the cylinder " << " is: " << calc_volume_cylinder(radius, height) << endl;
}

int main() {

    area_circle();
    volume_cylinder();

    return 0;
}

