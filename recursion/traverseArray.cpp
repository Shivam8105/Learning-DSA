#include <iostream>
using namespace std;

void traverse(vector<int>& arr,int currentIndex,int n){
    if(currentIndex == n){
        return;
    }
    cout << arr[currentIndex] << " ";
    traverse(arr,currentIndex + 1,n);
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    traverse(v,0,n);
}