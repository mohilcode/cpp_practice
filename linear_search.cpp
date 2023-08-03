#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int target;
    cin >> target;
    int x;
    while(cin >> x){
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); ++i){
        if(v[i] == target){
            cout << "Present at " << i;
            return 0;
        }
    }
        cout << "Not Present";
}
