#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s){
    int left = 0, right = s.length() - 1;
    while(right > left){
        if(!isalnum(s[left])) left++;
        elseif(!isalnum(s[right])) right--;
        elseif(tolower(s[left]) != tolower(s[right])) return false;
        else {
            left++;
            right--
        }
    }
    return true;
}

int main(){
    string s;
    getline(cin, s);
    cout << s;
}
