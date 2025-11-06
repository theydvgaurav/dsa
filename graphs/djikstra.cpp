#include <bits/stdc++.h>
using namespace std;

void djikstra(int src, vector<vector<pair<int,int>>> &adj, vector<int> &dis){
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq; // pq<ValueType, ContainerType, Comparator>
    pq.push({0,src}); // {dis, node} because we need to process nearer nodes first
    dis[src] = 0;
    while(!pq.empty()){
        int node = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        for(auto it: adj[node]){
            int w = it.second;
            int n = it.first;
            if(w+d < dis[n]){
                dis[n] = w + d;
                pq.push({w+d,n});
            }
        }
    }
}


int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int,int>>> adj(n+1);
	for(int i=0; i<m; i++){
	    int x, y, z;
	    cin >> x >> y >> z;
	    adj[x].push_back({y,z});
	    adj[y].push_back({x,z});
	}

	vector<int> dis(n,1e9);
	djikstra(0,adj,dis);
	for(auto it: dis){
	    cout << it << " ";
	}
	return 0;

}
