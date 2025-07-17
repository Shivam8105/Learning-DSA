#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v1, int n, vector<int> &v2, int m){
    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;
    v1.resize(n + m); 

    while(i >= 0 && j >= 0){
        if(v1[i] > v2[j]){
            v1[k] = v1[i];
            i--;
        } else {
            v1[k] = v2[j];  
            j--;
        }
        k--;
    }

    // If v2 has remaining elements
    while(j >= 0){
        v1[k] = v2[j];
        j--;
        k--;
    }

    // No need to copy remaining v1 elements, they’re already in place
}

int main() {
    int n, m;
    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i < n; i++){
        cin >> v1[i];
    }

    cin >> m;
    vector<int> v2(m);
    for(int i = 0; i < m; i++){
        cin >> v2[i];
    }

    merge(v1, n, v2, m);

    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
