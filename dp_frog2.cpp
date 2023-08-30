// https://atcoder.jp/contests/dp/tasks/dp_b

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int h[N], dp[N];

int cost(int n, int k) {
    if(n == 1) return 0;
    if(dp[n] != -1) return dp[n];
    
    int incur = INT_MAX;
    for(int i = 1; i <= k && n-i >= 1; ++i) {
        incur = min(incur, cost(n-i, k) + abs(h[n] - h[n-i]));
    }
    return dp[n] = incur;
}

int main() {
    memset(dp, -1, sizeof(dp));
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) {
        cin >> h[i];
    }
    cout << cost(n, k);
}
