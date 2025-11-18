#include <iostream>
#include <vector>
using namespace std;

void pal(long long i, long long j, vector<long long>& arr){
    long long n = arr.size();
    if(i >= j){
        cout << "YES" << endl;
        return;
    }
    if(arr[i] == arr[j]){
        pal(i + 1, j - 1,arr);
    }
    else if(arr[i] != arr[j]){
        cout << "NO" << endl;
    }
}

int main(){
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    pal(0,arr.size() - 1,arr);
}