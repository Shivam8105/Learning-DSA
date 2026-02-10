#include <iostream>
#include <queue>
#include <vector>

using namespace std;

//! dfs

// void dfs(int room,vector<vector<int>>& rooms, vector<bool>& visited){
//     visited[room] = true;

//     for(int neighbour : rooms[room]){
//         if(!visited[neighbour]){
//             visited[neighbour] = true;
//             dfs(neighbour,rooms,visited);
//         }
//     }
// }
//     bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         int n = rooms.size();
//         vector<bool> visited(n,false);

//         dfs(0,rooms,visited);

//         for(bool v : visited){
//             if(!v) return false;
//         }
//         return true;
//     }

void bfs(int node, vector<vector<int>>& rooms, vector<bool>& visited){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(int neighbour : rooms[front]){
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}

bool canVisitAllRooms(vector<vector<int>>& rooms) {
    int n = rooms.size();
    vector<bool> visited(n, false);

    bfs(0, rooms, visited);

    for(bool v : visited){
        if(!v) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    vector<vector<int>> rooms(n);

    for(int i = 0; i < n; i++){
        int k;              
        cin >> k;
        rooms[i].resize(k);
        for(int j = 0; j < k; j++){
            cin >> rooms[i][j];
        }
    }

    if(canVisitAllRooms(rooms))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
