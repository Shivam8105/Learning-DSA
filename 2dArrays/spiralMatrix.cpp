#include <iostream>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int totalNumberOfElements = n * m;

    int minRow = 0;
    int maxRow = m - 1;
    int minCol = 0;
    int maxCol = n - 1;
    int count = 0;
    vector<int> result;

    while (minRow <= maxRow && minCol <= maxCol)
    {
        // Right

        for (int i = minCol; i <= maxCol && count < totalNumberOfElements; i++)
        {
            result.push_back(matrix[minRow][i]);
            count++;
        }
        minRow++;

        // Down

        for (int i = minRow; i <= maxRow && count < totalNumberOfElements; i++)
        {
            result.push_back(matrix[i][maxCol]);
            count++;
        }
        maxCol--;

        // Left

        for (int i = maxCol; i >= minCol && count < totalNumberOfElements; i--)
        {
            result.push_back(matrix[maxRow][i]);
            count++;
        }
        maxRow--;

        // Up

        for (int i = maxRow; i >= minRow && count < totalNumberOfElements; i--)
        {
            result.push_back(matrix[i][minCol]);
            count++;
        }
        minCol++;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    vector<int> spiral = spiralOrder(matrix);
    for(int i = 0; i < n * m; i++){
        cout << spiral[i] << " ";
    }
    return 0;
}