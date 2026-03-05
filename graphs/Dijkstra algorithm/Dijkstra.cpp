#include <iostream>
#include <set>
using namespace std;

//! using priority_queue

class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int,long long>>> adj(V);
        for(auto &it : edges){
            int u = it[0];
            int v = it[1];
            int w = it[2];

            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
        vector<long long> dist(V,1e18);
        
        dist[src] = 0;
        pq.emplace(0,src);
        
        while(!pq.empty()){
            long long dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            if(dis > dist[node]) continue;

            for(auto& it : adj[node]){
                long long edgeWeight = it.second;
                int adjNode = it.first;
                
                if(dis + edgeWeight < dist[adjNode]){
                    dist[adjNode] = dis + edgeWeight;
                    pq.emplace(dist[adjNode],adjNode);
                }
            }
        }
        vector<int> ans(V);
        for(int i = 0; i < V; i++){
            ans[i] = (dist[i] == 1e18 ? 1e9 : (int)dist[i]);
        }

        return ans;
    }
};

//! using set

class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        int m = edges.size();
        vector<vector<pair<int,int>>> adj(V);
        
        for(int i = 0; i < m; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        
        set<pair<int,int>> st;
        vector<int> dist(V,1e9);
        
        st.insert({0,src});
        dist[src] = 0;
        
        while(!st.empty()){
            auto it  = *(st.begin());
            int weight = it.first;
            int node = it.second;
            st.erase(it);
            
            for(auto neighbour : adj[node]){
                int newNode = neighbour.first;
                int newWeight = neighbour.second;
                
                if(dist[node] + newWeight < dist[newNode]){
                    if(dist[newNode] != 1e9){
                        st.erase({dist[newNode],newNode});
                    }
                    dist[newNode] = dist[node] + newWeight;
                    st.insert({dist[newNode],newNode});
                }
            }
        }
        return dist;
    }
};