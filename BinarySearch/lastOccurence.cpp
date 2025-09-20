#include <iostream>
#include <vector>
using namespace std;

vector<int> lastOccurence(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            ans = mid;        
            low = mid + 1;   
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (ans == -1) return {};  
    return {ans};
}

int main() {
    vector<int> nums = {1,2,3,3,4,4,5,6};
    int target = 3;
    vector<int> ans = lastOccurence(nums, target);
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
}
