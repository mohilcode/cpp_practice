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

}
