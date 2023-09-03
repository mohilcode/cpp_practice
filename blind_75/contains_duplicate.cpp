#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    vector<int> v;
    int x;
    while(cin >> x){
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); ++i){
        auto it = s.find(v[i]);
        if(it != s.end()){
            cout << "true";
            return 0;
        }
        s.insert(v[i]);
    }
    cout << "false";
    return 0;
}
