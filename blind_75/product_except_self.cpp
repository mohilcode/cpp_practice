#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums){
    int n = nums.size();
    vector<int> result(n, 1);

    int leftProduct = 1;
    for(int i = 1; i<n; ++i){
        leftProduct *= nums[i-1];
        result[i] = leftProduct;
    }

    int rightProduct = 1;
    for(int i = n-2; i>=0; --i){
        rightProduct *= nums[i+1];
        result[i] *= rightProduct;
    }

    return result;
}

int main(){
    int x;
    vector<int> nums;
    while(cin >> x){
        nums.push_back(x);
    }
    for(auto v: productExceptSelf(nums)){
        cout << v << " ";
    }
    return 0;
}
