#include <iostream>
#include <vector>
using namespace std;

int findFirst(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1, first = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; // keep searching on the left side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

int findLast(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1, last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; // keep searching on the right side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

vector<int> occurrence(vector<int>& nums, int target) {
    vector<int> ans(2, -1);
    ans[0] = findFirst(nums, target);
    ans[1] = findLast(nums, target);
    return ans;
}

int main() {
    vector<int> nums;
    int n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cin >> target;
    vector<int> result = occurrence(nums, target);
    for (auto it : result) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
