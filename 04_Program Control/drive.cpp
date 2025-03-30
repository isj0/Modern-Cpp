#include <iostream>
using namespace std;

int main(){
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    int age {};
    cout << "Enter age: ";
    cin >> age;

    if (age >= 16) {
        cout << "Yes - you can drive!";
    }
    else {
        int diff {16 - age};
        cout << "Sorry, come back in " << diff << " years" << endl;
    }
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}