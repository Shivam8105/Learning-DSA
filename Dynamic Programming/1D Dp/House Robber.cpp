#include <iostream>

using namespace std;


class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        int even = 0;
        int odd = 0;

        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                even = max(nums[i] + even,odd);
            }else{
                odd = max(nums[i] + odd,even);
            }
        }
        return max(even,odd);
    }
};

class Solution {
public:
vector<int> dp;
int solve(int i,vector<int>& nums){
    int n = nums.size();
    if(i >= n) return 0;

    if(dp[i] != -1) return dp[i];

    int rob = nums[i] + solve(i + 2,nums);
    int skip = solve(i + 1,nums);

    return dp[i] = max(rob,skip);
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.assign(n,-1);
        return solve(0,nums);
    }
};
