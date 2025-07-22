#include <iostream>
#include <vector>
using namespace std;

int matrixScore(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    // Flip the Rows
    for(int i = 0; i < rows; i++){
        if(grid[i][0] == 0){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }

    //Flip the cols
    for(int j = 0; j < cols; j++){
        int countZero = 0;
        int countOne = 0;
        for(int i = 0; i < rows; i++){
            if(grid[i][j] == 0) countZero++;
            else countOne++;
        }
        if(countZero > countOne){
            for(int i = 0; i < rows; i++){
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }

    //Convert Decimal Value
    int sum = 0;
    
    for(int i = 0; i < rows; i++){
        int x = 1;
        for(int j = cols - 1; j >= 0; j--){
            sum += grid[i][j] * x;
            x *= 2;
        }
    }
    return sum;
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > matrix(n,vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    cout << endl;

    int score = matrixScore(matrix);
    cout << score << endl;
}