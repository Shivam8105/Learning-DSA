#include <iostream>
#include <vector>

using namespace std;

void bfs(int node,vector<vector<int>>& adj,vector<bool>& visited){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        cout << frontNode << " ";
        for(int neighbour : adj[frontNode]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }
}

int main(){
     int n,m;
    cin >> n >> m;

    vector<bool> visited(n + 1,false);

    vector<vector<int>> adj(n+1);

    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        cout << i << " -> ";
        for(int x : adj[i]){
            cout << x << " ";
        }
        cout << endl;
    }

    bfs(1,adj,visited);
    return 0;
}