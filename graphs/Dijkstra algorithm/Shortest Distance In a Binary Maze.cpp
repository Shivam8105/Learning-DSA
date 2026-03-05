#include <iostream>
using namespace std;

// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        queue<pair<int,pair<int,int>>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        dist[source.first][source.second] = 0;
        q.push({0,{source.first,source.second}});
        
        vector<int> dRow = {-1,0,+1,0};
        vector<int> dCol = {0,+1,0,-1};
        
        while(!q.empty()){
            int cost = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            
            if(row == destination.first && col == destination.second){
                return cost;
            }
            
            for(int k = 0; k < 4; k++){
                int nx = row + dRow[k];
                int ny = col + dCol[k];
                
                if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] != 0){
                    if(cost + 1 < dist[nx][ny]){
                        dist[nx][ny] = cost + 1;
                        q.push({dist[nx][ny],{nx,ny}});
                    }
                }
            }
        }
        return -1;
    }
};
