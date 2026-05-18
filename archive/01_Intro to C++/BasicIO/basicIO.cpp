#include <iostream>


int main() {
    int num1;
    int num2;
    double num3;

    std::cout << "Hello from Project 2" << std::endl;
    std::cout << "Enter 2 integers";
    std::cin >> num1;
    std::cin >> num2;
    std::cout << "Now enter a double: " << std::endl;
    std::cin >> num3;

    std::cout << "Sum of integers " << num1 << num2 << " == " << num1 + num2<< std::endl;
    std::cout << "The double entered = " << num3 << std::endl;
    return 0;
}