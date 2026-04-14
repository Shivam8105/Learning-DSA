//! : Find an index in an array such that the sum of elements to the left is 
//! equal to the sum of elements to the right


#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    

    int sum = accumulate(arr.begin(),arr.end(),0);
    int leftSum = 0;
    for(int i = n - 1; i >= 0; i--){
        sum -= arr[i];
        if(leftSum == sum){
            cout << i << endl;
            return 0;
        }
        leftSum += arr[i];
    }
    cout << -1 << endl;
    return 0;
}
