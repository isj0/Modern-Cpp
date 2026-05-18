#include <iostream>


using namespace std;

int main() {


    string s1 {"This is a test"};

    cout << s1.find("This") << endl;
    cout << s1.find("is") << endl;
    cout << s1.find("test") << endl;
    cout << s1.find('e') << endl;
    cout << s1.find("is", 4) << endl;
    cout << s1.find("XX") << endl;

}