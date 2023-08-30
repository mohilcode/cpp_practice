//https://atcoder.jp/contests/dp/tasks/dp_a

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int h[N], dp[N];


int cost(int n){
    if(n == 1) return 0;
    if(n == 2) return abs(h[2]-h[1]);
    if(dp[n] != -1) return dp[n];
    return dp[n] = min(cost(n-1)+abs(h[n]-h[n-1]), cost(n-2)+abs(h[n]-h[n-2]));
}

int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> h[i];
    }
    cout << cost(n);
}
