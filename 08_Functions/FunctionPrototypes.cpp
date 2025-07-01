
#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
double calc_area_circle(double radius);
double calc_volume_cylinder(double, double);
void area_circle();
void volume_cylinder();

const double PI {3.14159};

int main() {

    area_circle();
    volume_cylinder();

    return 0;
}

double calc_area_circle(double radius) {
    return PI * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
    return PI * radius * radius * height;
}

void area_circle() {
    double radius;
    cout << "\nEnter the radius of circle: ";
    cin >> radius;
    cout << "Area of the circle " << "with radius " << radius << " is: " << calc_area_circle(radius) << endl;
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