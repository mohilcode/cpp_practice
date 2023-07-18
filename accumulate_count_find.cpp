#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;
    int ct = count(v.begin(), v.end(), 4);
    cout << ct << endl;
    // int element = *find(v.begin(), v.end(), 67);
    // cout << element;
    auto it = find(v.begin(), v.end(), 6);
    if(it != v.end()){
        cout << *it << endl;
    }
    else{
        cout << "element not found";
    }
}

