#include <iostream>

int main() {

    int battery;

    std::cout << "Enter battery percentage: ";
    std::cin >> battery;

    if (battery >= 80 && battery <= 100) {
        std::cout << "Battery Full" << std::endl;
    }
    else if (battery <= 79 && battery >= 40) {
        std::cout << "Battery Medium" << std::endl;
    }
    else if (battery < 40 && battery >= 15) {
        std::cout << "Battery Low" << std::endl;
    }
    else if (battery < 15 && battery >= 0) {
        std::cout << "Battery Low" << std::endl;
        std::cout << "WARNING: Return robot to charging station." << std::endl;
    }
    else {
        std::cout << "Unsual battery level entered." << std::endl;
    }

    return 0;
}