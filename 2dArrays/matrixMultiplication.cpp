#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the rows of 1st matrix: ";
    cin >> n;
    int m;
    cout << "Enter the cols of 1st matrix: ";
    cin >> m;
    int p;
    cout << "Enter the rows of 2nd matrix: ";
    cin >> p;
    int q;
    cout << "Enter the cols of 2nd matrix: ";
    cin >> q;

    if(m == p){
        int a[n][m];
        cout << "Enter the elements of 1st matrix: ";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        cout << endl;

        int b[p][q];
         cout << "Enter the elements of 2nd matrix: ";
        for(int i = 0; i < p; i++){
            for(int j = 0; j < q; j++){
                cin >> b[i][j];
            }
        }
        cout << endl;
        int res[n][q];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < q; j++){
                res[i][j] = 0;
                for(int k = 0; k < m; k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < q; j++){
               cout << res[i][j] << " ";
            }
            cout << endl;
        }

    }else{
        cout << "The Matrxi multiplication is not possible.";
    }
}