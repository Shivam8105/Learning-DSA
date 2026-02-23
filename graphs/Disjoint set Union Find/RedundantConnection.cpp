#include <iostream>
#include <vector>

using namespace std;

int find(int x,vector<int>& parent){
    if(x == parent[x]){
        return x;
    }
    return parent[x] = find(parent[x],parent);
}

bool Union(int x,int y, vector<int>& parent, vector<int>& rank){
    int x_parent = find(x,parent);
    int y_parent = find(y,parent);

    if(x_parent == y_parent){
        return true;
    }

    if(rank[x_parent] > rank[y_parent]){
        parent[y_parent] = x_parent;
    }else if(rank[x_parent] < rank[y_parent]){
        parent[x_parent] = y_parent;
    }else{
        parent[x_parent] = y_parent;
        rank[y_parent]++;
    }
    return false;
}

vector<int> findRedundantConnection(vector<vector<int>>& edges){
    int n = edges.size();
    vector<int> parent(n + 1);
    vector<int> rank(n + 1,1);
    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }

    for(auto& x : edges){
        int u = x[0];
        int v = x[1];

        if(!Union(u,v,parent,rank)){
            return {u,v};
        }
    }
    return {};
}

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> parent(n + 1);
    vector<int> rank(n + 1,0);

    for(int i = 0; i <= n; i++){
        parent[i] = i;
    }

    
}