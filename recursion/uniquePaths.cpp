#include <iostream>

using namespace std;

int uniquePaths(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;
    return uniquePaths(m, n - 1) + uniquePaths(m - 1, n);
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << uniquePaths(m,n) << endl;
}