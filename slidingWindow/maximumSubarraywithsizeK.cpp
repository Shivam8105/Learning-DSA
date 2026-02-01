#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int k;
    cin >> k;

    int ans = INT_MIN;
    int sum;

    for(int i = 0; i <= n - k; i++){
        sum = 0;
        for(int j = i; j < i + k; j++){
            sum += nums[j];
        }
        ans = max(ans,sum);
    }
    cout << ans << endl;
}