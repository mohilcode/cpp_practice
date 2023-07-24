#include<bits/stdc++.h>
using namespace std;

double eps = 1e-6;

double multiply(double mid, int n){
    double ans = 1;
    for(int i = 0; i < n; ++i){
        ans *= mid;
    }
    return ans;
}

int main(){
    double x;
    int n;
    cin >> x >> n;
    double lo = 1, hi = x, mid;
    while(hi - lo > eps ){
        mid = (hi + lo) / 2;
        if(multiply(mid, n) < x){
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    //N*Log(x*(10^d))

    cout << setprecision(10) << lo << endl;
    cout << pow(x, 1.0/n) << endl;
}
