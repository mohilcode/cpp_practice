#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e2 + 5;
const int MAXW = 1e5 + 5;

long long dp[MAXN][MAXW];

long long func(int idx, int W, const vector<long long> weight, const vector<long long> values){
    //if the index passes or the weight is overflowing
    if(idx < 0 || W<=0){
        return 0;
    }
    if(dp[idx][W] != -1){
        return dp[idx][W];
    }
    //if the weight of the item is greater than W
    if(weight[idx] > W){
        return dp[idx][W] = func(idx-1, W, weight, values);
    }
    //Item is included or not
    long long included = values[idx] + func(idx-1, W - weight[idx], weight, values);
    long long excluded = func(idx-1, W, weight, values);

    return dp[idx][W] = max(included, excluded);
}


int main(){
    int n, W;
    cin >> n >> W;
    memset(dp, -1, sizeof(dp));
    vector<long long> weight(n), values(n);
    for(int i = 0; i< n; ++i){
        cin >> weight[i] >> values[i];
    }
    cout << func(n-1, W, weight, values);
    return 0;
}
