/*
Given N string, print unique strings in lexicographical
order with their frequency
N <= 10^5
|S| <= 1000 (Cant do this if string size is too big)
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    set<string> s;
    int n;
    cin >>n;
    for(int i = 0; i < n; ++i){
        string str;
        cin >> str;
        s.insert(str);
    }
    for(auto &value : s){
        cout << value << endl;
    }
}
