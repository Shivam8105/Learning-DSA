#include <iostream>
#include <vector>

using namespace std;

bool isCycle(int node,vector<vector<int>>& adj,vector<bool>& visited,vector<int>& parent){
    queue<int> q;
    q.push(node);
    visited[node] = true;
    parent[node] = -1;

    while(!q.empty()){
        int front = q.front();
        q.pop();
        for(int neighbour : adj[front]){
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push(neighbour);
                parent[neighbour] = front;
            }else if(parent[front] != neighbour){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);

    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> parent(n + 1,-1);
    vector<bool> visited(n + 1,false);

    bool ans = isCycle(1,adj,visited,parent);

    if(ans){
        cout << "yes" << endl;
        return 0;
    }
    cout << "no" << endl;
    
}