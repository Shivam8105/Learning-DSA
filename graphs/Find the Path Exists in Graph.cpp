#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited){
    visited[node] = true;
    for(int neighbour : adj[node]){
        if(!visited[neighbour]){
            visited[neighbour] = true;
            dfs(neighbour,adj,visited);
        }
    }
    
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);

        for(auto& x : edges){
            int u = x[0];
            int v = x[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(n,false);
        dfs(source,adj,visited);

        return visited[destination];
    }
};