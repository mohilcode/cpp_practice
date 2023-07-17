#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m){
    cout << m.size() <<endl;
    for(auto &value : m){
        cout << value.first << " " << value.second << endl; //accessing value also takes O(1)
    }
}

int main() {
    unordered_map<int, string> m;
    m[1] = "abc"; // O(1) it uses has tables
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m[5] = "cvc";

    // map<string, string> m;
    // m["abcd"] = "abcd"; 

    // map<int, string> :: iterator it;
    // for(it = m.begin();  it != m.end(); ++it){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    // auto it = m.find(7); //O(1)
    // m.erase(3);
    
    // auto io = m.find(5); //O(1), can take iterator also
    // if(io != m.end()) // use this to avoid error 
    //     m.erase(io);

    // m.clear();

    // if(it == m.end()){
    //     cout << "No Value";
    // }
    // else{
    //     cout << it->first << " " << it->second;
    // }
    print(m);    

}
