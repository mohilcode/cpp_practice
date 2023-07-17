/*
Given a list of N words. Count the number of words that appear exactly twice in the list.
Example 1:
Input:
N = 3
list = {Geeks, For, Geeks}
Output: 1
Explanation: 'Geeks' is the only word that appears twice. 
1<= N <= 104
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        m[s]++;
    }
    int counts = 0;
    for(auto &pr : m){
        if(pr.second == 2){
            counts++;
        }        
    }
    cout << counts;

}

