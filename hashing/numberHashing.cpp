#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    // precompute
    int hash[13] = {0};
    for(int i = 0 ; i < n; i++){
        hash[arr[i]] += 1;
    }
    while(x--){
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
    return 0;
}