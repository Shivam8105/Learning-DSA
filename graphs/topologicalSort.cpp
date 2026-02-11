#include <iostream>
#include <vector>

using namespace std;

vector<int> topoSort(vector<vector<int>>& adj){
    int n = adj.size();
    vector<int> indegree(n,0);
    vector<int> ans;

    for(int u = 0; u < n; u++){
        for(int v : adj[u]){
            indegree[v]++;
        }
    }

    queue<int> q;

    for(int i = 0; i < n; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int frontNode = q.front();
        ans.push_back(frontNode);
        q.pop();

        for(auto neighbour : adj[frontNode]){
            indegree[neighbour]--;
            if(indegree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    return ans;
}

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>> adj(n);

    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> ans = topoSort(adj);

    if(ans.size() == n){
        cout << "Cycle does not exits" << endl;
    }else{
        cout << "Cycle exists" << endl;
    }

    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}