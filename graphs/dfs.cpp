#include <iostream>
#include <vector>

using namespace std;

void dfs(int node,vector<vector<int>>& adj,vector<bool>& visited,vector<int>& ans){
    ans.push_back(node);
    visited[node] = true;

    for(int neighbour : adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour,adj,visited,ans);
        }
    }
}

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    vector<bool> visited(n + 1,false);
    vector<int> ans;

    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,adj,visited,ans);

    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}