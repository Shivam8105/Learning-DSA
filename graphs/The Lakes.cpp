#include <iostream>
#include <vector>

using namespace std;

int dfs(int i, int j,vector<vector<bool>>& visited,vector<vector<int>>& grid){
    int n = grid.size();
    int m = grid[0].size();
    int volume = grid[i][j];
    visited[i][j] = true;

    vector<int> dRow = {-1,0,+1,0};
    vector<int> dCol = {0,+1,0,-1};

    for(int k = 0; k < 4; k++){
        int nx = i + dRow[k];
        int ny = j + dCol[k];
        if(nx >= 0 && nx < n && ny < m && ny >= 0 && !visited[nx][ny] && grid[nx][ny] != 0){
            volume += dfs(nx,ny,visited,grid);
        }
    }
    return volume;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        vector<vector<int>> grid(n,vector<int>(m));
        vector<vector<bool>> visited(n,vector<bool>(m,false));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> grid[i][j];
            }
        }
        int maxVolume = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j] && grid[i][j] != 0){
                    maxVolume = max(maxVolume,dfs(i,j,visited,grid));
                }
            }
        }
        cout << maxVolume << endl;
    }
}