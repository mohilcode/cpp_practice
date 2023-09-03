#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> map;
    for (string s : strs) {
        string t = s; 
        sort(t.begin(), t.end());
        map[t].push_back(s);
    }
    vector<vector<string>> result;
    for (auto p : map) {
        result.push_back(p.second);
    }
    return result;
}

int main(){
    vector<string> strs;
    string s;
    while(cin >> s){
        strs.push_back(s);
    }
    vector<vector<string>> result = groupAnagrams(strs);
    for (auto group : result) {
        for (string s : group) {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}
