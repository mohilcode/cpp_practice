#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        return a.first < b.first; // ascending
    }else{
        return a.second > b.second; //descending
    }
}

// bool cmp(int a, int b){
//     return a > b;
// }

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp) ;//Introsort - Mix of quicksort, heapsort and insertion sort (nlogn)
    for(int i = 0; i < n; ++i){
        cout << a[i].first << " " << a[i].second << endl;
    }
    cout << endl;
}

