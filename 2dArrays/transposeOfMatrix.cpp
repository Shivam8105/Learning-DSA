#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int arr1[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr1[i][j] = arr[j][i];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
}
