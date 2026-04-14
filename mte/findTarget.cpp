//! Find two numbers in a sorted array that add up to a target.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int target;
    cin >> target;

    int left = 0;
    int right = n - 1;

    while(left <= right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            cout << arr[left] << " " << arr[right] << endl;
            return 0;
        }
        else if(sum < target){
            left++;
        }else{
            right--;
        }
    }
    cout << -1 << endl;
    return 0;
}