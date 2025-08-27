#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result){
    if(index == nums.size()){
        if(!current.empty()){
            result.push_back(current);
            return;
        }
        return;
    }
    current.push_back(nums[index]);
    solve(index + 1, nums, current, result);
    current.pop_back();

     int nextIndex = index + 1;
    while (nextIndex < nums.size() && nums[nextIndex] == nums[index]){
        nextIndex++;
    }
    solve(nextIndex, nums, current, result);
}

int main() {
	// your code goes here
     int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    vector<int> current;
    solve(0, nums, current, result);
    for (auto &subset : result) {
        for (int x : subset) cout << x << " ";
        cout << "\n";
    }
	return 0;
}