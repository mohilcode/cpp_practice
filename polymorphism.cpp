#include<bits/stdc++.h>
using namespace std;

//Base Class
class YoutubeChannel {
private:    
    string Name;
    int SubscribersCount;
    list<string> PublishedVideosTitles;

protected:
        string OwnerName;
        int ContentQuality;
    
public:
    YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
    }

    void GetInfo(){
        cout << "Name: " << Name <<endl;
        cout << "Published Videos: ";
        for(auto name: PublishedVideosTitles){
            cout << name <<endl;
        }
        cout << "Subscribers: " << SubscribersCount <<endl;
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
    void CheckAnalytics(){
        if(ContentQuality<5)
            cout << Name << " has bad quality content" << endl;
        else
            cout << Name << " has great quality content" << endl;
    }
};

//Derived CLass
class CookingYoutubeChannel:public YoutubeChannel{
public:
    CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){

    }
    void Practice(){
        cout << OwnerName << " is practice cooking, learning recipes, experimenting with spices" << endl;
        ContentQuality++;
    }
};

class SingersYoutubeChannel:public YoutubeChannel{
public:
    SingersYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){

    }
    void Practice(){
        cout << OwnerName << " is practice singing, learning songs, experimenting with beats" << endl;
        ContentQuality++;
    }
};

int main(){
    CookingYoutubeChannel cookingytChannel("Amy's Kitchen", "Amy");
    SingersYoutubeChannel singingytChannel("John Sings", "John");
    // cookingytChannel.PublishVideo("Apple Pie");
    // cookingytChannel.PublishVideo("Chocolate Cake");
    // cookingytChannel.Subscribe();
    // cookingytChannel.Subscribe();
    // cookingytChannel.GetInfo();
    cookingytChannel.Practice();
    singingytChannel.Practice();
    singingytChannel.Practice();
    singingytChannel.Practice();
    singingytChannel.Practice();
    singingytChannel.Practice();

    YoutubeChannel * yt1 = &cookingytChannel;
    YoutubeChannel * yt2 = &singingytChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();
}
