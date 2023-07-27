//Intuitive
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> m;
    int a[n];
    int target;
    cin >> target;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        m[a[i]] = i;
    }
    for(int i = 0; i < n; ++i){
        int dif = target - a[i];
        if(m.count(dif) && m[dif] != i){
            cout << i << " ";
            cout << m[dif];
            break;
        } 
    }
}

//Non-Intuitive
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> result;

        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            if (map.find(complement) != map.end()){
                result.push_back(map[complement]);
                result.push_back(i);
                break;
            }
            else{
                map.insert({nums[i],i});
            }
        }
        return result;
    }

};
