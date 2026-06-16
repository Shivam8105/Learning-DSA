#include <iostream>
using namespace std;

int rob(vector<int>& nums){
    int n = nums.size();
    int odd = 0;
    int even = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            even = max({even,even + nums[i],odd});
        }else{
            odd = max({odd,odd + nums[i],odd});
        }
    }
    return max(even,odd);
}

int main(){
    vector<int> nums = {2,7,9,3,1};
    int ans = rob(nums);
    cout << ans << endl;
}