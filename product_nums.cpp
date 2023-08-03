#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int x;
    while(cin >> x){
        v.push_back(x);
    }
    int product = 1;
    for(auto num : v){
        product *= num;
    }
    cout << product;
}
