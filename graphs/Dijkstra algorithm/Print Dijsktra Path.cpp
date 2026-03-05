#include <iostream>
using namespace std;

class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<vector<pair<int,int>>> adj(n + 1);
        
        for(int i = 0; i < m; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        vector<int> dist(n + 1,1e9);
        vector<int> parent(n + 1,-1);
        
        dist[1] = 0;
        parent[1] = -1;
        
        pq.push({0,1});
        
        while(!pq.empty()){
            int weight = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            if(dist[node] < weight) continue;
            
            for(auto it : adj[node]){
                int newNode = it.first;
                int newWeight = it.second;
                
                if(dist[node] + newWeight < dist[newNode]){
                    dist[newNode] = dist[node] + newWeight;
                    parent[newNode] = node;
                    pq.push({dist[newNode],newNode});
                }
            }
        }
        if(dist[n] == 1e9) return {-1};
        int curr = n;
        vector<int> path;
        while(curr != -1){
            path.push_back(curr);
            curr = parent[curr];
        }
        reverse(path.begin(), path.end());
        path.insert(path.begin(), dist[n]);
        return path;
    }
};