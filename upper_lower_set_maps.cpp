#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // int a[n];
    // set<int> s;
    map<int, int> m;
    for(int i = 0; i < n; ++i){
        int x;
        int v;
        cin >> x >> v;
        m[x] = v;
    }

    for(auto it : m){
        cout << it.first << " " << it.second << endl;
    }
    // auto itr = s.lower_bound(25);
    auto itr = m.lower_bound(7); //uses trees
    
    cout << (*itr).first << endl;
}

