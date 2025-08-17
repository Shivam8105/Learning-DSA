#include <iostream>
using namespace std;
void reverseArray(vector<int> &arr, int currIndex,int n){
    if(currIndex == n){
        return;
    }
    reverseArray(arr,currIndex + 1, n);
    cout << arr[currIndex] << " ";
}

int main(){
    vector<int> arr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    reverseArray(arr,0,n);
}