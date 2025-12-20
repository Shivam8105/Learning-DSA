#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int dp[100001][4][3];

    int solve(int idx, int take, int sum, vector<int>& nums) {
        int n = nums.size();

        // picked exactly 3 numbers
        if (take == 3) {
            if (sum % 3 == 0) return sum;
            return INT_MIN;
        }

        // invalid state
        if (idx == n || take > 3)
            return INT_MIN;

        if (dp[idx][take][sum % 3] != -1)
            return dp[idx][take][sum % 3];

        // take current number
        int lena_hai = solve(idx + 1, take + 1, sum + nums[idx], nums);

        // skip current number
        int nhi_lena_hai = solve(idx + 1, take, sum, nums);

        return dp[idx][take][sum % 3] = max(lena_hai, nhi_lena_hai);
    }

    int maximumSum(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        int finalAns = solve(0, 0, 0, nums);
        return max(0, finalAns);
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    cout << sol.maximumSum(nums) << endl;

    return 0;
}
