#include <iostream>
#include <vector>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    vector<int> ans;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(nums[mid] == target){
            if(nums[mid - 1] != target){
                ans.push_back(mid);
                return ans;
            }
            else{
                high = mid - 1;
            }
        }
        else if(nums[mid] < target) low = mid + 1;
        else if(nums[mid] > target) high = mid - 1;
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,3,4,4,5,6};
    int target = 3;
    vector<int> ans = searchRange(nums,target);
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
}
