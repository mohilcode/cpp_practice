#include<bits/stdc++.h>
using namespace std;

int main() {
    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string fn, ln;
        int k;
        cin >> fn >> ln >> k;
        for(int j = 0; j < k; ++j){
            int l;
            cin >> l;
            m[{fn, ln}].push_back(l);
        }
    }

    for(auto &pr : m){
        cout << pr.first.first << " " << pr.first.second << " " << pr.second.size() << endl;
        for(auto &v : pr.second){
            cout << v << " ";
        }
        cout << endl;
    }
}

// 3
// a b 4
// 1 2 3 4
// c d 2
// 1 2
// d f 3
// 2 3 4
