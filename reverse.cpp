#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    for(auto val : v){
        cout << val << " ";
    }
    cout << endl;
    string s = "absdvh";
    reverse(s.begin(), s.end());
    cout << s << endl;

}

