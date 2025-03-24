#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s1{"happy"};
    string s2{" birthday"};
    string s3;          // empty string

    // display strings & output their lengths
    cout << "s1: \"" << s1 << "\"; length: " << s1.length()
        <<"\ns2: \"" << s2 << "\"; length: " << s2.length()
        <<"\ns3: \"" << s3 << "\"; length: " << s3.length();

    // compare strings with == and !=
    cout << "\n\nThe results of comparing s2 and s1:" << boolalpha
        << "\ns2 == s1: " << (s2 == s1)
        << "\ns2 != s1: " << (s2 != s1);
    
    cout << "\n\nThe results of comparing s2 and s3:" << boolalpha
        << "\ns2 == s3: " << (s2 == s3)
        << "\ns2 != s3: " << (s2 != s3);

    // test string member function empty
    cout << "\n\nTesting s3.empty():\n";

    if (s3.empty()) {
        cout << "s3 is empty; assigning to s3;\n";
        s3 = s1 + s2;
        cout << "s3: \"" << s3 << "\"";
    }

    // testing new C++20 string member function
    cout << "\n\ns1 starts with \"ha\": " << s1.starts_with("ha") << "\n";
    cout << "\n\ns2 starts with \"ha\": " << s2.starts_with("ha") << "\n";
    cout << "\n\ns1 ends with \"ay\": " << s1.ends_with("ay") << "\n";
    cout << "\n\ns2 ends with \"ay\": " << s2.ends_with("ay") << "\n";
}