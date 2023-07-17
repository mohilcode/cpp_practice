#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m){
    cout << m.size() <<endl;
    for(auto &value : m){
        cout << value.first << " " << value.second << endl; //accessing value also takes O(log(n))
    }
}

int main() {
    // map<int, string> m;
    // m[1] = "abc"; // O(log(n))
    // m[5] = "cdc";
    // m[3] = "acd";
    // m.insert({4, "afg"});
    // // m[6]; // this will take O(log(n)) and if it was int instead of string, it would hav initialised with 0 value.
    // m[5] = "cvc";

    map<string, string> m;
    m["abcd"] = "abcd"; // since map uses red black trees which uses comparison in logn time to find the correct place for the key
    // in case of string it will  compare it to other string keys to enter so time complexity is = s.size()*O(log(n))

    // map<int, string> :: iterator it;
    // for(it = m.begin();  it != m.end(); ++it){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    auto it = m.find(7); //O(log(n))
    m.erase(3);
    
    auto io = m.find(5); //O(log(n)), can take iterator also
    if(io != m.end()) // use this to avoid error 
        m.erase(io);

    m.clear();

    // if(it == m.end()){
    //     cout << "No Value";
    // }
    // else{
    //     cout << it->first << " " << it->second;
    // }
    print(m);    

}

