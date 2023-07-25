#include<bits/stdc++.h>
using namespace std;

class YoutubeChannel {
private:    
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideosTitles;
public:
    YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    // Getter for Name
    string getName() {
        return Name;
    }

    // Setter for Name
    void setName(string name) {
        Name = name;
    }

    // Getter for OwnerName
    string getOwnerName() {
        return OwnerName;
    }

    // Setter for OwnerName
    void setOwnerName(string ownerName) {
        OwnerName = ownerName;
    }

    void GetInfo(){
        cout << "Name: " << Name <<endl;
        for(auto name: PublishedVideosTitles){
            cout << name <<endl;
        }
        cout << SubscribersCount <<endl;
    }
    void Subscribe(){
        SubscribersCount++;
    }
    void Unsubscribe(){
        if(SubscribersCount > 0)
            SubscribersCount--;
    }
    void PublishVideo(string title){
        PublishedVideosTitles.push_back(title);
    }
};

int main(){

    YoutubeChannel ytChannel("CodeBeauty", "Saldina");
    ytChannel.PublishVideo("C++ for beginners");
    ytChannel.PublishVideo("Html and CSS");
    ytChannel.PublishVideo("Python");
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();

    // Setting and Getting the name using the setters and getters
    ytChannel.setName("Hoya");
    cout << "New channel name: " << ytChannel.getName() << endl;

    ytChannel.setOwnerName("Kunt");
    cout << "New owner name: " << ytChannel.getOwnerName() << endl;
    ytChannel.GetInfo();
}
