#include <iostream>
#include <vector>
using namespace std;

void dfs(int node,vector<vector<int>>& adj,vector<bool>& visited){
    visited[node] = true;
    for(auto neighbour : adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour,adj,visited);
        }
    }
}

int connectedComponents(int n, vector<vector<int>>& adj){
    int result = 0;
    vector<bool> visited(n + 1,false);
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i,adj,visited);
            result++;
        }
    }
    return result;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);

    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << connectedComponents(n,adj) << endl;
}