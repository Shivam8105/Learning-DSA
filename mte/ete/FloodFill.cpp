#include <iostream>
using namespace std;

vector<vector<int>> floodFill(vector<vector<int>>& image,int sr, int sc, int color){
    int n = image.size();
    int m = image[0].size();

    queue<pair<int,int>> q;

    if(image[sr][sc] == color){
        return image;
    }

    int original = image[sr][sc];
    image[sr][sc] = color;
    
    q.push({sr,sc});

    vector<int> dRow = {-1,0,+1,0};
    vector<int> dCol = {0,-1,0,+1};

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = x + dRow[i];
            int ny = y + dCol[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m && image[nx][ny] == original){
                image[nx][ny] = color;
                q.push({nx,ny});
            }
        }
    }
    return image;
}

int main(){

}