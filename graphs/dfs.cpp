#include<bits/stdc++.h>

using namespace std;

vector<int> dfs;

void dfsOfGraph(int start, vector<int> &visited, vector<vector<int>> &adj, int par){
    dfs.push_back(start);
    visited[start] = 1;
    for(auto it: adj[start]){
        if(!visited[it] && par!=it ){
            dfsOfGraph(it,visited,adj,start);
        }
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1, vector<int>(0));
    for(int i=0; i<m; i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> visited(n+1,0);
    dfs.clear();
    dfsOfGraph(1,visited, adj, -1);
    for(auto it: dfs)
        cout << it << " ";
    return 0;
}
