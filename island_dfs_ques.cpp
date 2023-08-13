//First Solution
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;

vector<int> g[N];
bool vis[N];


void dfs(int vertex) {
    if(vis[vertex]) return;
    vis[vertex] = true;
    for(int child: g[vertex]){
        dfs(child);
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int *ptr[n*m];
    int k = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            ptr[k] = &a[i][j];
            k++;
        }
    }
    
    int l = -1;
    for(int i = 0; i < n * m; ++i){
        int x = i / m;
        int y = i % m;
        l++;
        if(*ptr[i] == 1) {
            g[l].push_back(999999);
            if(y > 0 && *ptr[i-1] == 1) 
                g[l].push_back(i-1);

            if(y < m-1 && *ptr[i+1] == 1) 
                g[l].push_back(i+1);

            if(x > 0 && *ptr[i-m] == 1) 
                g[l].push_back(i-m);

            if(x > 0 && y > 0 && *ptr[i-m-1] == 1) 
                g[l].push_back(i-m-1);

            if(x > 0 && y < m-1 && *ptr[i-m+1] == 1) 
                g[l].push_back(i-m+1);

            if(x < n-1 && *ptr[i+m] == 1) 
                g[l].push_back(i+m);

            if(x < n-1 && y > 0 && *ptr[i+m-1] == 1) 
                g[l].push_back(i+m-1);

            if(x < n-1 && y < m-1 && *ptr[i+m+1] == 1) 
                g[l].push_back(i+m+1);
        }
}


//     for(int i = 0; i < n*m; ++i) { 
//         cout << "Node " << i << ": ";
//         for(int j = 0; j < g[i].size(); ++j) {
//             cout << g[i][j] << " ";
//         }
//         cout << endl;
// }



    int ct = 0;
    for(int i = 1; i <= n*m; ++i){                  
        if(!vis[i] && !g[i].empty()){
            ct++;
            dfs(i);    
        }
    }
    cout << ct;
}
