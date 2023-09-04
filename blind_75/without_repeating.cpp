#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int length = 0;
    unordered_set<char> unique;
    int left = 0;
    int right = 0;

    while(right < s.size()) {
        if(!unique.count(s[right])) {
            unique.insert(s[right]);
            length = max(length, right - left + 1);
            right++;
        } else {
            unique.erase(s[left]);
            left++;
        }
    }
    return length;
}

int main() {
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);
}
