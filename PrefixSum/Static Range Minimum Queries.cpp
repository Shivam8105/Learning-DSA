#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int prefix(int a, int b, vector<int>& arr){
    int mini = INT_MAX;
    for(int i = a; i <= b; i++){
        mini = min(arr[i],mini);
    }
    return mini;
}

int main(){
    int n,q;
    cin >> n >> q;

    vector<int> arr(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    
    while(q--){
        int a,b;
        cin >> a >> b;

        int mini = prefix(a,b,arr);
        cout << mini << endl;
    }
}