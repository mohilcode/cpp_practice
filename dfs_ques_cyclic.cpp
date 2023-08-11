#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];
bool visited;

void dfs(int vertex, int parent) {
    if(vis[vertex]) return;
    vis[vertex] = true;
    for(int child: g[vertex]){
        if(child != parent){
            if(vis[child]) {
                visited = true;
                return;
            }
            dfs(child, vertex);
        }
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    for(int i = 1; i <= n; ++i){                  
    if(!vis[i]) dfs(i, -1);
    }
    cout << visited;
}
