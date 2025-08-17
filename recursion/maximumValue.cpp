#include <iostream>
using namespace std;

void maximum(vector<int>& arr,int currentIndex,int max,int n){
  if(currentIndex == n){
    cout << max << endl;
    return;
  }
  if(arr[currentIndex] > max){
    max = arr[currentIndex];
  }
  maximum(arr,currentIndex + 1,max,n);
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
    maximum(v,0,v[0],n);
}