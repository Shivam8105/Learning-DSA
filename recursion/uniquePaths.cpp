#include <iostream>

using namespace std;

// int uniquePaths(int m, int n)
// {
//     if (m == 1 || n == 1)
//         return 1;
//     return uniquePaths(m, n - 1) + uniquePaths(m - 1, n);
// }

void uniquePaths(int m, int n, string s){
   if(m == 1 && n == 1){
    cout << s << endl;
    return;
   }
   if(n > 1){
    uniquePaths(m, n - 1, s + "R");
   }
   if(m > 1){
    uniquePaths(m - 1,n,s + "D");
   }
}

int main()
{
    int m, n;
    cin >> m >> n;
    uniquePaths(m,n,"");
}