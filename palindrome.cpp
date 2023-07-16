// Given a string S of lower case English alphabet of length N and two integers L and R. CHeck whether all the letters of the substring from index L to R (L and R included) can be rearranged to form a palindrome or not. He wants to know this for Q values of L and R.

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while(q--){
            int l, r;
            cin >> l >> r;
            int a[26] = { 0 };
            for(int i = l-1; i < r; ++i){
                a[s[i] - 'a']++;    
            }
            // for(int i = 0; i < 26; ++i){
            //     cout << a[i] << ' ';
            // }
            int count = 0;
            for(int i = 0; i < 26; ++i){
                if(a[i] % 2 != 0){
                    count++;
                }
            }
            if(count > 1){
                cout << "NO" << endl;    
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}

// Input:
// 2
// 5 5
// abcec
// 1 2
// 2 5
// 3 5
// 1 5
// 1 4
// 5 5
// aabbc
// 1 2
// 2 5
// 3 5
// 1 5
// 1 4
