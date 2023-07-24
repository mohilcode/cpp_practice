#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;

void generate(int i, vector<int> &subset, vector<int> &nums){
    if(i == nums.size()){
        subsets.push_back(subset);
        return;
    }

    //if we dont add i
    generate(i+1, subset, nums);

    //if we add i
    subset.push_back(nums[i]);
    generate(i+1, subset, nums);
    subset.pop_back(); 
}

void printVec(vector<int> &v){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> nums;
    int x;
    while(cin >> x){
        nums.push_back(x);
    }
    vector<int> empty;
    generate(0, empty, nums);

    for(auto value: subsets){
        printVec(value);
    }

}

