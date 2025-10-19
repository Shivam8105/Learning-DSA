#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    // Step 1: XOR all elements. The result will be a ^ b, where a and b are the unique numbers.
    int xor_all = 0;
    for(int i = 0; i < n; i++) {
        xor_all ^= nums[i];
    }

    // Step 2: Find the rightmost set bit in xor_all (a ^ b)
    int rightmost_set_bit = xor_all & -xor_all;

    // Step 3: Divide numbers into two groups based on the rightmost set bit
    int num1 = 0, num2 = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] & rightmost_set_bit) {
            num1 ^= nums[i];  // Group 1: bit is set
        } else {
            num2 ^= nums[i];  // Group 2: bit is not set
        }
    }

    // Output the two unique numbers
    cout << num1 << " " << num2 << endl;
    return 0;
}
