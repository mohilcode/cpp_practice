#include<bits/stdc++.h>
using namespace std;

class YoutubeChannel {
public:    
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideosTitles;

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
    }
};

int main(){

    YoutubeChannel ytChannel("CodeBeauty", "Saldina");
    // ytChannel.PublishedVideosTitles.push_back("C++ for beginners");
    // ytChannel.PublishedVideosTitles.push_back("Html and CSS");
    // ytChannel.PublishedVideosTitles.push_back("C++");
    ytChannel.PublishedVideosTitles = {"C++ for beginners", "Html and CSS", "C++"};
    YoutubeChannel ytChannel1("AmySings", "Amy");

    // ytChannel.Name = "CodeBeauty";
    // ytChannel.OwnerName = "Saldina";
    // ytChannel.SubscribersCount = 1800;
    // ytChannel.PublishedVideosTitles = {"C++ for beginners", "Html and CSS", "C++"};

    // cout << "Name: " << ytChannel.Name <<endl;
    // for(auto name: ytChannel.PublishedVideosTitles){
    //     cout << name <<endl;
    // }

    ytChannel.GetInfo();

    // YoutubeChannel ytChannel1("AmySings", "Amy");
    // ytChannel1.Name = "AmySings";
    // ytChannel1.OwnerName = "Amy";
    // ytChannel1.SubscribersCount = 5600;
    // ytChannel1.PublishedVideosTitles = {"Bohemian Rhapsody", "Black Mamba", "Cool kids"};

    cout << "Name: " << ytChannel1.Name <<endl;
    for(auto name: ytChannel1.PublishedVideosTitles){
        cout << name <<endl;
    }


}
