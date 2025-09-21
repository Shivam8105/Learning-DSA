#include <iostream>
#include <vector>
using namespace std;

// int smallestNonNegative(vector<int> &nums)
// {
//     vector<int> helper;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int count = nums[i];
//         if (nums[i] + 1 == nums[i + 1])
//         {
//             continue;
//         }
//         else
//         {
//             helper.push_back(nums[i] + 1);
//         }
//     }
//     int min = INT_MAX;
//     for (int i = 0; i < helper.size(); i++)
//     {
//         if (helper[i] < min)
//         {
//             min = helper[i];
//         }
//     }
//     return min;
// }

//! Linear approach
// int smallestNonNegative(vector<int>& nums){
//     for(int i = 0; i < nums.size(); i++){
//         if(i != nums[i]){
//             return i;
//         }
//     }
//     return -1;
// }

//! Optimized approach

int smallestNonNegative(vector<int>& nums){
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == mid) low = mid + 1;
        else{
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4, 8, 9, 12};
    int ans = smallestNonNegative(nums);
    cout << ans << endl;
}
