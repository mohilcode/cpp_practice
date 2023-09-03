#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length())
        return false;

    unordered_map<char, int> counts;
    for(int i = 0; i < s.length(); i++){
        counts[s[i]]++;
        counts[t[i]]--;
    }

    for(auto count : counts){
        if(count.second != 0)
            return false;
    }

    return true;
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << (isAnagram(s,t) ? "true" : "false"); 
    return 0;
}
