#include <iostream>

using namespace std;

int main() {

    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    int change_amount {};

    // Compute change
    cout << "Enter the amount in cents: ";
    
    cin >> change_amount;

    int balance {}, dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    cout << "You can provide for this change as follows: " << endl;
    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;
    cout << "Dollars: " << dollars << endl;
    
    quarters = balance / quarter_value;
    balance = balance % quarter_value;
    cout << "Quarters: " << quarters << endl;
    
    dimes = balance / dime_value;
    balance = balance % dime_value;
    cout << "Dimes: " << dimes << endl;
    
    nickels = balance / nickel_value;
    balance = balance % nickel_value;
    cout << "Nickels: " << nickels / 5 << endl;

    cout << "Pennies: " << balance << endl;

    cout << endl;

    return 0;
    

}