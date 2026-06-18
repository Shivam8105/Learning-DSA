#include <iostream>
using namespace std;

int findCheapestPrice(int n, vector<vector<int>>& flights,int src,int dst, int k){
    int m = flights.size();
    vector<vector<pair<int,int>>> adj(n);

    for(int i = 0; i < m; i++){
        int u = flights[i][0];
        int v = flights[i][1];
        int w = flights[i][2];

        adj[u].push_back({v,w});
    }

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

    vector<vector<int>> dist(n,vector<int>(k + 2,1e9));

    pq.push({0,{src,0}});
    dist[src][0] = 0;

    while(!pq.empty()){
        int price = pq.top().first;
        int node = pq.top().second.first;
        int stop = pq.top().second.second;
        pq.pop();

        if(stop > k) continue;

        for(auto it : adj[node]){
            int newNode = it.first;
            int newPrice = it.second;

            if(price + newPrice < dist[newNode][stop + 1]){
                dist[newNode][stop + 1] = price + newPrice;
                pq.push({dist[newNode][stop + 1], {newNode,stop + 1}});
            }
        }
    }

    int ans = 1e9;

    for(int i = 0; i <= k + 1; i++){
        ans = min(ans,dist[dst][i]);
    }

    return ans == 1e9 ? -1 : ans;
}

int main(){

}