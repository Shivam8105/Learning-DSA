#include <iostream>
using namespace std;

int main(){
    vector<int> nums;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int max_el = INT_MIN;
    int count = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] > max_el){
            max_el = nums[i];
            count = 1;
        }else if(nums[i] == max_el){
            count++;
        }
        ans = max(ans,count);
    }
    cout << ans << endl;
    return 0;
}