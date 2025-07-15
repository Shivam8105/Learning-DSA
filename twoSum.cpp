#include <iostream>
#include <vector>
using namespace std;

// Function to find a pair that adds up to the target
vector<int> findPairWithSum(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {nums[i], nums[j]};
            }
        }
    }
    return {}; // Return empty vector if no pair is found
}

int main() {
    int n;
    cin >> n;  // Read size of array

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];  // Read array elements
    }

    int x;
    cin >> x;  // Read target sum

    vector<int> result = findPairWithSum(nums, x);
    
    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}
