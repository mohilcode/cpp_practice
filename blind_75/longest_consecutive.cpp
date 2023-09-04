#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums){
    unordered_set<int> s(nums.begin(), nums.end());
    int longest = 0;
    for(auto n: s){
        if(!s.count(n-1)){
            int length = 1;
            while(s.count(n+length))
                ++length;
            longest = max(longest, length);
        }
    }
    return longest;
}

int main(){
    int x;
    vector<int> nums;
    while(cin >> x){
        nums.push_back(x);
    }

    cout << longestConsecutive(nums);

}
