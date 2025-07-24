#include <iostream>
#include <vector>
using namespace std;

//! Brute Force approach

// void moveZeroes(vector<int>& nums){
//     int n = nums.size();
//     int x = 0;
//     for(int i = 0; i < n; i++){
//         if(nums[i] != 0){
//             nums[x] = nums[i];
//             x++;
//         }
//     }
//     for(int i = x; i < n; i++){
//         nums[i] = 0;
//     }
// }


vector<int> moveZeroes(vector<int>& nums){
    int j = -1;
    int n = nums.size();
    // for finding 1st zeroth element
    for(int i = 0; i < n; i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }
    if(j == - 1) return nums;
    for(int i = j + 1; i < n; i++){
        if(nums[i] != 0){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }

    return nums;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    vector<int> a = moveZeroes(nums);
     for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

