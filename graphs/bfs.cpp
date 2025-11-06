#include<bits/stdc++.h>

using namespace std;

vector<int> bfsOfGraph(int start, vector<int> &visited, vector<vector<int>> &adj){
    vector<int> bfs;
    bfs.clear();
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        bfs.push_back(t);
        for(auto it: adj[t]){
            if (!visited[it]){
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
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
    vector<int>bfs =  bfsOfGraph(1,visited, adj);
    for(auto it: bfs)
        cout << it << " ";
    return 0;
}
