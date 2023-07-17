/*
Monk is a multi-talented person, and prepares results for his college in his free time. 
(Yes, he is still in love with his old college!) He gets a list of students with their marks. 
The maximum marks which can be obtained in the exam is 100.
The Monk is supposed to arrange the list in such a manner that the list is sorted in 
decreasing order of marks. And if two students have the same marks, they should be 
arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, 
denoting the number of students. N lines follow, which contain 
a string and an integer, denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int, multiset<string>> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s;
        int x;
        cin >> s >> x;
        // m[x].insert(s);
        m[-1*x].insert(s);
    }
    // auto it = --m.end();
    // while(true){
    for(auto pr : m){
        // auto &students = (*it).second; 
        // int marks = (*it).first;
        // for(auto student : students){
        //     cout << student << " " << marks << endl;
        // }
        // if(it == m.begin()) break;
        // it--;
        for(auto students : pr.second){
            cout << students << " " << -1*pr.first << endl;
        }
    }   
}
