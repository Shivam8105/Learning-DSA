#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>&nums){
    int n = nums.size();
    int sum1 = (n * (n + 1)) / 2;
    int sum2 = 0;
    for(int i = 0; i < n; i++){
        sum2 += nums[i];
    }
    int missingNumber = sum1 - sum2;
    return missingNumber;
}

int main(){
    vector<int> v = {9,6,4,2,3,5,7,0,1};
    int x = missingNumber(v);
    cout << x << endl;
}