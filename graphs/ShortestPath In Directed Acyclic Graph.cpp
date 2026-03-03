#include <iostream>
using namespace std;

// User function Template for C++
class Solution {
  public:
  void topoSort(int node,vector<bool>& visited,vector<vector<pair<int,int>>>& adj,stack<int>& st){
      visited[node] = true;
      
      for(auto it : adj[node]){
          int v = it.first;
          if(!visited[v]){
              topoSort(v,visited,adj,st);
          }
      }
      st.push(node);
  }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>> adj(V);
        
        for(int i = 0; i < E; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            
            adj[u].push_back({v,w});
        }
        
        vector<bool> visited(V,false);
        stack<int> st;
        
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                topoSort(i,visited,adj,st);
            }
        }
        
        vector<int> dist(V,1e9);
        dist[0] = 0;
        while(!st.empty()){
            int node = st.top();
            st.pop();
            
            for(auto it : adj[node]){
                int v = it.first;
                int wt = it.second;
               if(dist[node] + wt < dist[v]){
                   dist[v] = dist[node] + wt;
               }
            }
        }
        
        for(int i = 0; i < dist.size(); i++){
            if(dist[i] == 1e9) dist[i] = -1;
        }
        return dist;
    }
};


int main(){

}