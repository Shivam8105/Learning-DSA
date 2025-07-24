#include <iostream>
#include <vector>
using namespace std;

//! Brute Force approach

// int singleNumber(vector<int>&nums){
//     int n = nums.size();
//     for(int i = 0; i < n; i++){
//         int count = 0;
//         int num = nums[i];
//         for(int j = 0; j < n; j++){
//             if(nums[j] == num){
//                 count++;
//             }
//         }
//         if(count == 1){
//             return num;
//         }
//     }
//     return -1;
// }

//! Optimal approach

int singleNumber(vector<int>&nums){
    int n = nums.size();
    int xorr = 0;
    for(int i = 0; i < n; i++){
        xorr = xorr ^ nums[i];
    }
    return xorr;
}

int main(){
    vector<int> v = {2,2,1};
    int x = singleNumber(v);
    cout << x << endl;
}