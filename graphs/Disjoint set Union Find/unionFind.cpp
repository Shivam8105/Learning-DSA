#include <iostream>
#include <vector>

using namespace std;

int find(int x, vector<int>& parent){
    if(x == parent[x]){
        return x;
    }
    return parent[x] = find(parent[x],parent);
}

void Union(int x, int y, vector<int>& parent, vector<int >& rank){
    int x_parent = find(x,parent);
    int y_parent = find(y,parent);

    if(x_parent == y_parent) return;

    if(rank[x_parent] > rank[y_parent]){
        parent[y_parent] = x_parent;
    }else if(rank[x_parent] < rank[y_parent]){
        parent[x_parent] = y_parent;
    }else{
        parent[x_parent] = y_parent;
        rank[y_parent]++;
    }
}

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> parent(n + 1);
    vector<int> rank(n + 1,0);

    for(int i = 0; i <= n; i++){
        parent[i] = i;
    }

    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;

        Union(u,v,parent,rank);
    }

    for(int i = 1; i <= n; i++){
        cout << "Node " << i << " -> parent " << find(i,parent) << endl;
    }
    return 0;
}