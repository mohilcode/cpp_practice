#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    // auto min = min_element(v.begin(), v.end());
    // cout << *min << endl;
    //or
    int max = *max _element(v.begin(), v.end());
    cout << max << endl;
}

