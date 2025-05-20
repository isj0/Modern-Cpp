#include <iostream>
#include <vector>
using namespace std;

// Nested Loops - Sum of the Product of all Pairs of Vector Elements

int main() {

    vector<int> v {2, 4, 6, 8};
    int result = 0;

    if (!v.empty() || v.size() != 1) {
        for (int i = 0; i < v.size(); ++i) {
            for (int j = i+1; j < v.size(); ++j) {

                cout << v[i] << " * " << v[j] << " == " << v[i] * v[j] << endl;
                result += v[i] * v[j];
            }
        }
    }
    else {
        result = 0;
    }

    return 0;
}