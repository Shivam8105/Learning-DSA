#include <iostream>
using namespace std;

vector<vector<int>> dp;
int solve(int i, vector<int>& nums,int prev){
    int n = nums.size();
    if(i >= n) return 0;

    if(dp[i][prev + 1] != -1) return dp[i][prev + 1];
    
    int notTake = solve(i + 1,nums,prev);
    int take = 0;

    if(prev == - 1 || nums[i] > nums[prev]){
        take = 1 + solve(i + 1,nums,i);
    }

    return dp[i][notTake] = max(take,notTake);

}

int lengthOfLIS(vector<int>& nums){
    int n = nums.size();
    dp.assign(n,vector<int>(n + 1,-1));
    return solve(0,nums,-1);
}

int main(){
    vector<int> nums = {10,9,2,5,3,7,101,18};
    cout << lengthOfLIS(nums) << endl;
}