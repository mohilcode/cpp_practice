#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
    for(auto value : s){
        cout << value << endl;
    } 
}

int main() {
    multiset<string> s;
    s.insert("abc"); //log(n)
    s.insert("fdfa");
    s.insert("brhs");
    s.insert("abc");
    auto it = s.find("abc"); // log(n), returns the first iterator
    if(it != s.end()){
        // cout << (*it);
        s.erase(it);
    }
    // cout << endl;
    s.erase("abc"); // delete all the values
    print(s);

}
