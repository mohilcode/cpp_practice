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
    
public:
    YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
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
};

//Derived CLass
class CookingYoutubeChannel:public YoutubeChannel{
public:
    CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){

    }
    void Practice(){
        cout << OwnerName << " is practice cooking, learning recipes, experimenting with spices" << endl;
    }
};

int main(){
    CookingYoutubeChannel cookingytChannel("Amy's Kitchen", "Amy");
    CookingYoutubeChannel cookingytChannel2("John's Kitchen", "John");
    // cookingytChannel.PublishVideo("Apple Pie");
    // cookingytChannel.PublishVideo("Chocolate Cake");
    // cookingytChannel.Subscribe();
    // cookingytChannel.Subscribe();
    // cookingytChannel.GetInfo();
    cookingytChannel.Practice();
    cookingytChannel2.Practice();
}
