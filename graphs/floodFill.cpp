#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& image, int currentRow, int currentCol,
             int initialColor, int newColor) {

        int n = image.size();
        int m = image[0].size();

        if (currentRow < 0 || currentCol < 0 || currentRow >= n ||
            currentCol >= m)
            return;

        if (image[currentRow][currentCol] != initialColor)
            return;

        image[currentRow][currentCol] = newColor;
        dfs(image, currentRow + 1, currentCol, initialColor, newColor);
        dfs(image, currentRow - 1, currentCol, initialColor, newColor);
        dfs(image, currentRow, currentCol + 1, initialColor, newColor);
        dfs(image, currentRow, currentCol - 1, initialColor, newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {

        if (image[sr][sc] == color)
            return image;

        dfs(image, sr, sc, image[sr][sc], color);
        return image;
    }
};

