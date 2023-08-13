#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
int sum = 0;

void dfs(int vertex, int par=-1){
    sum += vertex; 
    for(int child : g[vertex]){
        if(child == par) continue;
        dfs(child, vertex);
    } 
}

int main() {
    int n;
    cin >> n; 
    for(int i = 0; i < n-1; ++i){
        int v1, v2;
        cin >>v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(13);
    cout << sum;
}
// Not Best Method, Use Pre-Computation

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

/*
Given Q Queries, Q <= 10^5
In each query given V,
Print subtree sum of V
*/


vector<int> g[N];
int s_sum[N];
void dfs(int vertex, int par=-1){
    s_sum[vertex] += vertex;
    for(int child : g[vertex]){
        if(child == par) continue;
        dfs(child, vertex);
        s_sum[vertex] += s_sum[child]; 
    } 
}

int main() {
    int n;
    cin >> n; 
    for(int i = 0; i < n-1; ++i){
        int v1, v2;
        cin >>v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    cout << s_sum[5];
}
