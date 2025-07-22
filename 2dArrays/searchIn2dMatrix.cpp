#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int i = 0;
    int j = cols - 1;
    while(i <= rows - 1 && j >= 0){
        if(matrix[i][j] == target) return true;
        else if(matrix[i][j] > target) j--;
        else i++;
    }
    return false;
}

int main(){
    int rows, cols;
    cin >> rows;
    cin >> cols;
    
    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;

   bool found = searchMatrix(matrix,target);

   if(found){
    cout << "true" << endl;
   }else{
    cout << "false" << endl;
   }
}