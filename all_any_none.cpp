#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x){
    return x > 0;
}

int main() {
    vector<int> v = {2,3,5};
    cout << all_of(v.begin(), v.end(), [](int x){return x>0;}) << endl; // only returns true if true for all
    cout << all_of(v.begin(), v.end(), is_positive) << endl;
    cout << any_of(v.begin(), v.end(), [](int x){return x<0;}) << endl;
    cout << none_of(v.begin(), v.end(), [](int x){return x<0;}) << endl;
    //none of the elements are less than o so it return true
    int a[3] = {2,3,5};
    cout << all_of(a, a+3, [](int x){return x>0;}) << endl;
}

