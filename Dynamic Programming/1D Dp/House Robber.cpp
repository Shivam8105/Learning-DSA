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

