#include <iostream>
using namespace std;

void dfs(int node,vector<bool>& visited, vector<vector<int>>& adj){
      visited[node] = true;
      
      for(auto neighbour : adj[node]){
          if(!visited[neighbour]){
              dfs(neighbour,visited,adj);
          }
      }
  }
  
    int countConnected(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        
        for(auto x : edges){
            int u = x[0];
            int v = x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> visited(V,false);
        int count = 0;
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                count++;
                dfs(i,visited,adj);
            }
        }
        
        return count;
    }

int main(){

}