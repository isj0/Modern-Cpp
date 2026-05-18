#include <iostream>
#include <vector>

using namespace std;

int main() {

    // int total_amount {100};
    // int total_number {8};
    // double average {0.0};

    // average = total_amount / total_number;
    // cout << average << endl;

    // average = static_cast<double> (total_amount) / total_number;
    // cout << average << endl;

    int total {0};
    int num1 {}, num2 {}, num3 {};
    const int count{3};
    cout << "Enter 3 integers separated by spaces " << endl;
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;
    double average {0.0};
    average = static_cast <double> (total) / count;

    cout << "The three numbers were " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "Sum of the numbers = " << total << endl;
    cout << "Average " << average << endl;

    cout << endl;

    return 0;

}