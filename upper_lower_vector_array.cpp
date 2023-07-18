#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // int a[n];
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
    // int *ptr = lower_bound(a, a+n, 56); 
    auto itr = upper_bound(a.begin(), a.end(), 7);
    if(itr == a.end()){
        cout << "NOT FOUND";
        return 0;
    }
    cout << *itr << endl;
}

