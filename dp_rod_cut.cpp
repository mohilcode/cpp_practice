//https://practice.geeksforgeeks.org/problems/rod-cutting0840/1

#include<bits/stdc++.h>
using namespace std;
int dp[1005];

int maxValue(int length, const vector<int> &values){
    if(length <= 0){
        return 0;
    }
    if(dp[length] != -1){
        return dp[length];
    }

    int include = INT_MIN;
    for(int i = 1; i <= length; ++i){
        include = max(include, values[i] + maxValue(length-i, values));
    }

    return dp[length] = include;
} 


int main(){
    int n;
    cin >> n;
    vector<int> values(n+1);
    memset(dp, -1,  sizeof(dp));
    for(int i = 1; i <= n; ++i){
        cin >> values[i];
    }
    cout << maxValue(n, values);

    return 0;
}
