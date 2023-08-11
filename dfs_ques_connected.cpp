//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N]; 
bool vis[N];

vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int vertex){
    //Take action on vertex after entering the vertex
    // if(vis[child]) return; // also ok
    current_cc.push_back(vertex);
    vis[vertex] = true;
    for(int child : g[vertex]){
        if(vis[child]) continue;
        //Take action on child before entering the child node
        dfs(child);
        //Take action on child after exiting the child node
    }
    //Take action on vertex before exiting the vertex
}
//O(V+E)
int main() {
    int n, e;
    cin >> n >> e;
    for(int i = 0; i < e; ++i){
        int v1, v2;
        cin >>v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int ct = 0;
    for(int i =1; i<=n; ++i){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        ct++;
    }
    cout << cc.size() <<endl;
    for(auto c_cc : cc){
        for(int vertex : c_cc){
            cout << vertex << " ";
        }
        cout <<endl;
    }
}

/*
8 5
1 2
2 3
2 4
3 5
6 7
*/

// Mohil's Solution
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<int> g[N];
bool vis[N];
vector<int> cc;

void dfs(int vertex){
    if(vis[vertex]) return;
    vis[vertex] = true;
    cc.push_back(vertex);
    for(int child: g[vertex]){
        dfs(child);
    }
}

void ccc(vector<int> coc){
    for(auto value : cc){
    cout << value << " ";
    }
    cout << endl;
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
    dfs(1);
    ccc(cc);
    cc.clear();
    int ct = 1;
    for(int i = 1; i <= n; ++i){        
        if(!vis[i]){            
             ct++;
             dfs(i);
             ccc(cc);
             cc.clear();
        }
    }
    cout << ct;
}

