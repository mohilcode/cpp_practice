#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> mystack;
    for(int i =0; i<s.length(); i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            mystack.push(s[i]);
        }
        else{
            if(mystack.empty()){
                return false;
            }
            else if(s[i]==')'){
                if(mystack.top()=='('){
                    mystack.pop();
                } else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(mystack.top()=='['){
                    mystack.pop();
                } else{
                    return false;
                }
            }
            else if(s[i]=='}'){
                if(mystack.top()=='{'){
                    mystack.pop();
                } else{
                    return false;
                }
            }
        }    
    }
    if(mystack.empty()){
        return true;
    } else {
        return false;
    }

    }

int main() {
    string s;
    cin >> s;
    cout << isValid(s);
}
