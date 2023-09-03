#include<bits/stdc++.h>
using namespace std;

string encode(vector<string>& strs){
    string new_s;
    for(auto rit = strs.rbegin(); rit != strs.rend(); ++rit){
        new_s += *rit;
        new_s.push_back('-');
        new_s.push_back('*');
    }
    return new_s;
}

vector<string> decode(string s) {
    vector<string> strs;
    string temp;
    for(int i=0; i < s.length(); ++i) {
        if(i < s.length()-1 && s[i] == '-' && s[i+1] == '*') {
            strs.push_back(temp);
            temp = "";
            i++; 
        } else {
            temp += s[i];
        }
    }
    reverse(strs.begin(), strs.end()); 
    return strs;
}

int main(){
    string s;
    vector<string> strs;
    while(cin >> s){
        strs.push_back(s);
    }

    for(auto st: decode(encode(strs))){
        cout << st << " ";
    }

}
