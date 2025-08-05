#include <iostream>
#include <list>
using namespace std;

void displayRatings(const list<int>& playersRatings) {
    for (list<int>::const_iterator it = playersRatings.begin(); it!=playersRatings.end(); it++) {
        cout << "Player Rating: " << *it << endl;
    }
}

void insertPLayerOrderedList(int newPlayerRating, list<int>& playersByRating) {
    for (list<int>::iterator it = playersByRating.begin(); it != playersByRating.end(); it++) {
        playersByRating.insert(it, newPlayerRating);
        return;
    }
}

int main() {

    // Lists are dynamic
    // list<int> myList;
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_front(15);
    // myList.erase(myList.begin());
    

    // for (list<int>::iterator it=myList.begin(); it!=myList.end(); it++) {

    //     cout << *it << endl;
    // }

    list<int> allPlayers = {2, 9, 6, 7 ,3, 1, 4, 8, 3, 2, 9};

    list<int> beginners;    // rating 1-5
    list<int> pros;     // rating 6-10;

    for (list<int>::iterator it = allPlayers.begin(); it!=allPlayers.end(); it++) {
        int rating = *it;
        if (rating >= 1 && rating <= 5) {
            beginners.push_back(rating);
        }
        else if (rating >= 6 && rating <= 10) {
            pros.push_back(rating);
        }
    }

    cout << "Beginners:\n";
    displayRatings(beginners);
    cout << "Pros:\n";
    displayRatings(pros);

    return 0;
}