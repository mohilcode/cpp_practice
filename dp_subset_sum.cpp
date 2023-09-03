//https://leetcode.com/problems/partition-equal-subset-sum/description/
#include<bits/stdc++.h>
using namespace std;
int dp[205][20005];

bool canPartitionRecursively(vector<int>& nums, int n, int target) {

    if (target == 0) return true;
    if (n == 0 || target < 0) return false;
    if(dp[n][target] != -1) return dp[n][target];
    return dp[n][target] = canPartitionRecursively(nums, n-1, target - nums[n-1]) || canPartitionRecursively(nums, n-1, target);
}

bool canPartition(vector<int>& nums) {
    int total = accumulate(nums.begin(), nums.end(), 0);

    if (total & 1) return false;

    return canPartitionRecursively(nums, nums.size(), total/2);
}

int main(){
    memset(dp, -1, sizeof(dp));
    int x;
    vector<int> nums;
    while(cin >> x){
        nums.push_back(x);
    }
    cout << canPartition(nums);
}
