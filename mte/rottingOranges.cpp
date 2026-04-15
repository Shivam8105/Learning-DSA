#include <iostream>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
        int fresh = 0;
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;
        int time = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        vector<int> dRow = {-1,0,+1,0};
        vector<int> dCol = {0,+1,0,-1};

        while(!q.empty() && fresh > 0){
            int size = q.size();
            for(int i = 0; i < size; i++){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                for(int k = 0; k < 4; k++){
                    int nRow = row + dRow[k];
                    int nCol = col + dCol[k];

                    if(nRow >= 0 && nCol >= 0 && nRow < n && nCol < m && grid[nRow][nCol] == 1){
                        grid[nRow][nCol] = 2;
                        fresh--;
                        q.push({nRow,nCol});
                    }
                }
            }
            time++;
        }
        if(fresh > 0) return -1;
        return time;
    }
    
int main(){

}