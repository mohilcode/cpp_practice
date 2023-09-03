#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int LCS(string text1, int m, string text2, int n) {

    if (m == 0 || n == 0) return 0;
    if(dp[m][n] != -1) return dp[m][n];  
    if (text1[m-1] == text2[n-1]) 
        return dp[m][n] = 1 + LCS(text1, m-1, text2, n-1);

    return dp[m][n] = max(LCS(text1, m-1, text2, n), LCS(text1, m, text2, n-1));
}

int main() {
    string text1, text2;
    memset(dp, -1, sizeof(dp));
    cin >> text1 >> text2;
    cout << LCS(text1, text1.length(), text2, text2.length()) << endl;
    return 0;
}
