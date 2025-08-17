#include <iostream>
using namespace std;

void sum(vector<int>&arr,int n){
    if(n < 1){
        return;
    }
    vector<int> temp(n - 1);
    for(int i = 0;i < n; i++){
        cout << arr[i] << " ";
        if(i != 0){
            temp[i - 1] = arr[i - 1] + arr[i];
        }
    }
    cout << endl;
    sum(temp,n - 1);
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sum(v,n);
}