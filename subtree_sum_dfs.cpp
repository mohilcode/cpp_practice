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
