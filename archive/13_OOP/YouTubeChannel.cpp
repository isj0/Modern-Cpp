#include <iostream>
#include <list>
using namespace std;


class YouTubeChannel {
private:
    string Name;
    // string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitle;

protected:
    string OwnerName;
    int ContentQuality = 0;
public:
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;

    }

    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "Owner name: " << OwnerName << endl;
        cout << "Subscriber Count: " << SubscribersCount << endl;
        cout << "Videos created: "<< endl;

        for (string videos:PublishedVideoTitle) {
        cout << "\t" << videos << endl;
        }
    }

    void Subscribe() {
        SubscribersCount++;
    }
    void UnSubscribe() {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }
    void PublishedVideo(string title) {
        PublishedVideoTitle.push_back(title);
    }



};

class GamingYoutubeChannel:public YouTubeChannel{
public:
    GamingYoutubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {

    }

    void Practice() {
        cout << OwnerName << "Reaching new horizons on the Gaming landscape" << endl;
    }
};

class SingersYoutubeChannel:public YouTubeChannel{
public:
    SingersYoutubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {

    }

    void Practice() {
        cout << OwnerName << " is taking singing classes, learning new songs, and how to dance." << endl;
    }
};

int main() {

    // YouTubeChannel ytChannel("ScratchGames", "Nim Nim");
    // // ytChannel.PublishedVideoTitle.push_back("Scratch Mario");
    // // ytChannel.PublishedVideoTitle.push_back("Scratch Flappy bird");
    // // ytChannel.PublishedVideoTitle.push_back("Crossy Road");
    // // ytChannel.Subscribe();
    // // ytChannel.Subscribe();
    // // ytChannel.Subscribe();
    // ytChannel.UnSubscribe();

    // ytChannel.PublishedVideo("Scratch Mario");
    // ytChannel.PublishedVideo("Scratchy Bird");

    // // ytChannel.Name = "ScratchGames";
    // // ytChannel.OwnerName = "Nim Nim";
    // // ytChannel.SubscribersCount = 100;
    // // ytChannel.PublishedVideoTitle = {"Scratch Mario", "Scratch Flappy bird", "Crossy Road"};

    // // cout << "Name: " << ytChannel.Name << endl;
    // // cout << "Owner name: " << ytChannel.OwnerName << endl;
    // // cout << "Subscriber Count: " << ytChannel.SubscribersCount << endl;
    // // cout << "Game created: "<< endl;

    // // for (string games:ytChannel.PublishedVideoTitle) {
    // //     cout << "\t" << games << endl;
    // // }
    
    // // cout << endl << endl;

    // YouTubeChannel ytChannel2("Star Coderz","Dim Dim");
    // // ytChannel2.Name = "Star Coderz";
    // // ytChannel2.OwnerName = "Dim Dim";
    // // ytChannel2.SubscribersCount = 300;
    // // ytChannel2.PublishedVideoTitle = {"C++ for Beginners", "Python for Data Science", "Data Wrangling"};

    // // cout << "Name: " << ytChannel2.Name << endl;
    // // cout << "Owner name: " << ytChannel2.OwnerName << endl;
    // // cout << "Subscriber Count: " << ytChannel2.SubscribersCount << endl;
    // // cout << "Courses created: "<< endl;

    // // for (string courses:ytChannel2.PublishedVideoTitle) {
    // //     cout << "\t" << courses << endl;
    // // }

    // ytChannel.GetInfo();
    // cout << endl;
    // ytChannel2.GetInfo();

    GamingYoutubeChannel ytGaming("Star Gaming", "Zero");
    // ytGaming.PublishedVideo("Fortnite");
    // ytGaming.PublishedVideo("CounterStrike");
    // ytGaming.Subscribe();
    // ytGaming.Subscribe();
    // ytGaming.Practice();
    // ytGaming.GetInfo();

    // YouTubeChannel ytChannel("ScratchGames", "Nim Nim");
    
    // GamingYoutubeChannel ytGaming2("Zero Games", "Tao");
    // ytGaming.PublishedVideo("Call of Duty");

    // ytGaming.Subscribe();
    // ytGaming.Subscribe();
    // ytGaming.Practice();
    // ytGaming.GetInfo();
    


    SingersYoutubeChannel ytSinging("John Doe", "John");
    
    ytGaming.Practice();
    ytSinging.Practice();


    cout << endl;

    return 0;
}