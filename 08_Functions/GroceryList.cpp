#include <iostream>
#include <string>

using namespace std;


void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13);
void modify_grocery_list();

void modify_grocery_list() {

    print_grocery_list();
    print_grocery_list(5);
    print_grocery_list(7,11);
}

void print_grocery_list(int apples, int oranges, int mangos) { //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
}

int main() {
    modify_grocery_list();

    return 0;
}