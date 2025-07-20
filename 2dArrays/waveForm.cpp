#include <iostream>
using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the rows of matrix: ";
//     cin >> n;
//     int m;
//     cout << "Enter the cols of matrix: ";
//     cin >> m;

//     int a[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     cout << endl;

//     for(int i = 0; i < n; i++){
//         if(i == 0 || i % 2 == 0){
//             for(int j = 0; j < m; j++){
//                 cout << a[i][j] << " ";
//             }
//         }else{
//             for(int j = m - 1; j >= 0; j--){
//                 cout << a[i][j] << " ";
//             }
//         }
//     }
// }

int main(){
    int n;
    cout << "Enter the rows of matrix: ";
    cin >> n;
    int m;
    cout << "Enter the cols of matrix: ";
    cin >> m;

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;

    for(int j = 0; j < m; j++){
        if(j % 2 == 0){
            for(int i = 0; i < n; i++){
                cout << a[i][j] << " ";
            }
        }else{
            for(int i = n - 1; i >= 0; i--){
                cout << a[i][j] << " ";
            }
        }
    }
}