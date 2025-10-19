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
    int xor_all = 0;
    for(int i = 0; i < n; i++) {
        xor_all ^= nums[i];
    }
    int rightmost_set_bit = xor_all & -xor_all;
    int num1 = 0, num2 = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] & rightmost_set_bit) {
            num1 ^= nums[i];  
        } else {
            num2 ^= nums[i];  
        }
    }
    cout << num1 << " " << num2 << endl;
    return 0;
}
