#include<bits/stdc++.h>

using namespace std;

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
    for(int i=1; i<n+1; i++){
        for(auto itr: adj[i])
            cout << i << " -> " << itr << "\n";
    }
    return 0;
}
