#include <iostream>
#include <vector>

using namespace std;


//! dfs solution


// class Solution {
// public:

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
// };

//! bfs solution

class Solution {
public:

void bfs(int node, vector<vector<int>>& rooms,vector<bool>& visited){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(int neighbour : rooms[front]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = true;
            }
        }
    }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();

        vector<bool> visited(n,false);

        bfs(0,rooms,visited);
        for(bool v : visited){
            if(!v) return false;
        }
        return true;
    }
};