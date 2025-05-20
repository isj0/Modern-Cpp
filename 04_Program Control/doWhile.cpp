#include <iostream>
#include <vector>
using namespace std;

int main() {

    int number {};

    char selection {};

    do {
        double width {}, height {};
        cout << "Enter the width and height separated by a space: ";
        cin >> width >> height;

        double area {width * height};
        cout << "Area of the rectangle: " << area << endl;

        cout << "Calculate another? (Y/N)";
        cin >> selection;
    } while (selection == 'Y' || selection == 'y');
    cout << "Thanks" << endl;

    return 0;
}