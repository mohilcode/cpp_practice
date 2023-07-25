#include<bits/stdc++.h>
using namespace std;

// to check if some number's ith bit is set or not, AND it with a number where only the 
// ith number(the bit you want to check) is set.
// 1000 - 1 = 111

void printBinary(int num){
    for(int i = 10; i >= 0; --i){
        cout << (((num >> i)) & 1);
    }
    cout << endl;
}

int main(){
    printBinary(9);
    int a = 9;
    int i = 1;
    if((a & (1<<i)) != 0){
        cout << "set bit\n";
    }else{
        cout << "not set bit\n";
    }
    //bit set
    printBinary(a | 1<<1);
    //bit unset
    printBinary( ~(1<<3) );
    printBinary( a&(~(1<<3)) );
    //toggle
    printBinary( a ^ (1<<2));
    //cout number of set bits 
    int ct = 0;
    for(int i = 31; i >=0; --i){
        if((a & (1<<i)) != 0){
            ct++;
        }
    }
    cout << ct <<endl;
    cout << __builtin_popcount(a) <<endl; //only for integer
    cout << __builtin_popcountll((1LL<<35) - 1) <<endl; //for long integers
} 
