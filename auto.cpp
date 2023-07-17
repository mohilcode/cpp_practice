#include<bits/stdc++.h>
using namespace std;
 
#include<iostream>
using namespace std;

int main() {
    vector<int> v = {2, 3, 5, 6, 7};
    // for(int i = 0; i < v.size(); ++i){
    //     cout << v[i]  << " ";
    // }
    // cout << endl;
    for(auto it = v.begin(); it != v.end(); ++it){
        cout << (*it) << " ";
    }
    cout << endl;

    // for(int &value : v){
    //     value++;
    //     cout << value << " ";
    // }
    // cout << endl;

    // for(int &value : v){
    //     cout << value << " ";
    // }
    // cout << endl;

    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    for(auto io = v_p.begin(); io != v_p.end(); ++io){
        cout << (*io).first << " " << (*io).second << endl;
    }
    // for(io = v_p.begin(); io != v_p.end(); ++io){
    //     cout << io->first << " " << io->second << endl;
    // }
    
    //Best way is to use auto and range based loop together
    for(auto &value : v_p){
        cout << value.first << " " << value.second << endl;;
    }

    // (*it).first <=> (it->first)
    auto a = 1.0;
    cout << a << endl;
}

