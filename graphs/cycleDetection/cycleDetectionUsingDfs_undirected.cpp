#include <iostream>
#include <vector>

using namespace std;

bool isCycle(int node,vector<vector<int>>& adj,vector<bool>& visited,vector<int>& parent){
    visited[node] = true;
    parent[node] = -1;

    for(auto neighbour : adj[node]){
        if(!visited[neighbour]){
            visited[neighbour] = true;
            parent[neighbour] = node;
            if(isCycle(neighbour,adj,visited,parent)){
                return true;
            }
        }else if(parent[node] != neighbour){
            return true;
        }
    }
    return false;
}

int main(){
   int n,m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);

    bool ans = false;

    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> parent(n + 1,-1);
    vector<bool> visited(n + 1,false);

    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(isCycle(i,adj,visited,parent)){
                ans = true;
                break;
            }
        }
    }

    if(ans){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}