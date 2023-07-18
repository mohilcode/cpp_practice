#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    stack<char> s;
    if(str.length() % 2 != 0){
        cout << "false";
    }
    else{
        for(int i = 0; i < str.length(); ++i){
            if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
                s.push(str[i]);
            }
            else if(str[i] == ')'){
                if(s.top() == '('){
                    s.pop();
                }
            }
            else if(str[i] == ']'){
                if(s.top() == '['){
                    s.pop();
                }
            }
            else if(str[i] == '}'){
                if(s.top() == '{'){
                    s.pop();
                }
            }

        }
    }
    if(s.empty()){
        cout << "true";
    }
    else{
        cout << "false";
    }        
}

