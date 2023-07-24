/*
You are given two integers n and m , further you are given a sequence of n numbers.
Now for several query lets say q number of queries, for each query input lets denote 
it with x, find the maximum value of (a[i] + x) % m possible.

Input Format -
First line of input contains an integer , n ,denoting the size of the array, and an integer m.
Second line contains n space separated integers of the array.
Third line contains the number of queries,q.
Next q lines contain a query value x, for which we need to find the output.

Output Format -
For each query return the maximum value of (a[i]+value of q)%m possible, in separate line.

Constraints -
1 ≤ n ≤ 10^5
1 ≤ m ≤ 10^8
0 ≤  a[i] ≤ 10^15
1 ≤ q ≤ 10^5
0 ≤ x ≤ 10^15
    
Sample Input

5 10
0 1 2 3 4
3
1
6
9

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
        nums[i] %= m;
    }
    sort(nums.begin(), nums.end());
    int q;
    cin >> q;
    while(q--){
        long long int x;
        cin >> x;
        x %= m;
        auto itr = upper_bound(nums.begin(), nums.end(), m-1-x);
        if(itr != nums.begin()){
            itr--;
        }
        cout << max(((nums[n-1]+x)%m), (*itr+x)%m) << endl;


        
    }       
}

