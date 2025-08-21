#include <iostream>
#include <vector>
using namespace std;

void subSet(int arr[],int n, int idx, vector<int> ans){
    if(idx == n){
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    subSet(arr,n,idx + 1,ans);
    ans.push_back(arr[idx]);
    subSet(arr,n,idx + 1,ans);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    vector<int> ans;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    subSet(arr,n,0,ans);
	return 0;
}
