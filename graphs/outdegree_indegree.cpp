#include <iostream>
#include <vector>

using namespace std;

void inOut(int n,vector<vector<int>>& adj){
    vector<int> indegree(n + 1,0);
    vector<int> outdegree(n + 1,0);

    for(int u = 1; u <= n; u++){
        outdegree[u] = adj[u].size();
        for(int v : adj[u]){
            indegree[v]++;
        }
    }

    for(int i = 1; i <= n; i++){
        cout << "Node " << i << " Outdegree = " << outdegree[i] << " Indegree = " << indegree[i] << endl;
    }
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

    inOut(n,adj);
    return 0;
}