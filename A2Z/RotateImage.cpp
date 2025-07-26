#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix){
    int n = matrix.size();
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for(int k = 0; k < n; k++){
        int i = 0;
        int j = n - 1;
        int temp = matrix[k][i];
        matrix[k][i] = matrix[k][j];
        matrix[k][k] = temp;
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    rotate(matrix);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}