#include<bits/stdc++.h>
using namespace std;

int fib(int x){
    if(x <= 1){
        return x;
    }    
    int ans;
    ans = fib(x-1) + fib(x-2);
    return ans;
}

int main(){
    int x;
    cin >> x;
    cout << fib(x);     
}
