#include<bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k){
    unordered_map<int, int> m;
    for(auto v: nums){
        m[v]++;
    }
    multimap<int, int, greater<int>> mapp;
    for(auto p: m){
        mapp.insert({p.second,p.first});
    }
    int count = 0;
    vector<int> vk;
    for(const auto& pair: mapp){
        if(count >= k) break;
        vk.push_back(pair.second);
        ++count;
    }
    return vk;
}

//Other Solution (Priority Queue)

vector<int> topKFrequent(vector<int>& nums, int k){
    unordered_map<int, int> m;
    for(auto v: nums){
        m[v]++;
    }

    vector<int> vk;
    priority_queue<pair<int, int>> pq;
    for(auto p: m){
        pq.push(make_pair(p.second, p.first));
        if(pq.size() > (int)m.size() - k){
            vk.push_back(pq.top().second);
            pq.pop();
        }
    }
    return vk;
}

//
int main(){
    int k;
    cin >> k;
    int x;
    vector<int> nums;
    while(cin >> x){
        nums.push_back(x);
    }
    for(auto v: topKFrequent(nums, k)){
        cout << v << " ";
    }
    return 0;
}
