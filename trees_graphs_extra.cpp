#include<bits/stdc++.h>
using namespace std;

const int N= 1e3+10;
int graph[N][N];

vector<pair<int,int>> graph2[N];

int main() {
    int n, m;
    cin >> n >>m;
    for(int i = 0; i < m; ++i){
        int v1,v2,wt;
        cin >> v1 >> v2;
        graph[v1][v2] = wt;
        graph[v2][v1] = wt;

        graph2[v1].push_back({v2, wt});
        graph2[v2].push_back({v1, wt});
    }
    //Adjacency Matrix
    // O(n^2) - space complexity
    // N != 10 ^ 5/ N <= 10  ^ 2

    //Adjacency List
    //O(N+M)
    //N = 10^5, E < 10^ 7

    //i, j connected ?, i , > wt?
    if(graph[i][j] == 1){
        //connected
    }
    graph1[i][j]

    for(int child: graph2[i]){
        if(child == j){
            //connected
        }
    }

    for(pair<int,int> child: graph2[i]){
        if(child.first == j){
            //connected
             child.seond
        }
    }


}
/*
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/
