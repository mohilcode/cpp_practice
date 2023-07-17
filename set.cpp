#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(auto value : s){
        cout << value << endl;
    } 
}

int main() {
    set<string> s;
    s.insert("abc"); //log(n)
    s.insert("fdfa");
    s.insert("brhs");
    s.insert("abc");
    auto it = s.find("abc"); // log(n)
    if(it != s.end()){
        cout << (*it);
        s.erase(it);
    }
    cout << endl;
    print(s);

}
