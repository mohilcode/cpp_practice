#include<bits/stdc++.h>
using namespace std;

class YoutubeChannel {
public:    
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideosTitles;
};

int main(){

    YoutubeChannel ytChannel;
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PublishedVideosTitles = {"C++ for beginners", "Html and CSS", "C++"};

    cout << "Name: " << ytChannel.Name <<endl;
    for(auto name: ytChannel.PublishedVideosTitles){
        cout << name <<endl;
    }

}
