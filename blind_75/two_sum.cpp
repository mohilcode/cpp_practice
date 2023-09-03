#include<bits/stdc++.h>
using namespace std;

vector<int> func(int target, vector<int> &nums){
    unordered_map<int, int> m;
    vector<int> vec;
    for(int i = 0; i < nums.size(); ++i){
        int dif = target - nums[i];
        if(m.find(dif) != m.end()){
            vec.push_back(m[dif]);
            vec.push_back(i);
            break; 
        }
        else{
            m[nums[i]] = i;
        }
    }
    return vec;
}


int main(){
    int target;
    cin >> target;
    int x;
    vector<int> nums;
    while(cin >> x){
        nums.push_back(x);
    }

    for(auto val: func(target, nums)){
        cout << val << " ";
    }

    return 0;
}
