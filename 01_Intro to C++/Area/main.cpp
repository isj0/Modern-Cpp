#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter the length of the room = ";
    double length {0};
    cin >> length;

    cout << "Now enter the width of the room = ";
    double width {0};
    cin >> width;
    
    cout << "Area of the room == " << length * width << " ft sq." << endl;

}