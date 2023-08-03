#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int x;
    while(cin >> x){
        v.push_back(x);
    }
    int ct = 0;
    int max_ct = 0;
    for(int i = 0; i < v.size(); ++i){
        if(v[i] == 0){
            ct++;
            max_ct = max(max_ct, ct);
        } else {
            ct = 0; 
        }
    }
    cout << "Longest sequence of consecutive zeros: " << max_ct << endl;
}
