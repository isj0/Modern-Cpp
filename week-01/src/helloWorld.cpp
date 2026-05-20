#include <iostream> 
// iostream is the header file library 
// it lets us work with input output object, such as cout, cin

// using namespace std:
// the names of the object such as cout, cin etc,
// are stored in the standard library of the iostream header file
// so inorder to use those objects we can add std namespace
// using std:: keep coding exercises shorter

int main() {
    
    // cout -> object for console output
    // << -> insertion operator
    // "" -> quotes for 
    // :: -> scope resolution
    // std:: makes it clear where the names come from
    // compiler ignores whitespace
    
    std::cout << "Hello World, Welcome to my Learning Journey" << std::endl;

    return 0;
}