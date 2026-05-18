#include <iostream>
#include <string>

using namespace std;

void func2(int &x, int y, int z) {
    x += y + z;
}

int func1 (int a, int b) {
    int result = 0;
    result = a + b;
    func2(result, a, b);
    return result;
}

int main() {

    int x = 10;
    int y = 20;
    int z = 0;

    z = func1(x, y);
    cout << z << endl;

    return 0;
}
