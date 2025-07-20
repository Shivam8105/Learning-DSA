#include <iostream>
using namespace std;

// void swap(int i, int j, int &arr[][]){
//     int temp = 

// }

int main(){
    int m;
    cout << "Enter the number of rows/columns: ";
    cin >> m;
    int arr[m][m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = i; j < m; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}