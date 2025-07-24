#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>&nums){
    int count = 0;
    int maxCount = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1){
            count++;
            if(count >= maxCount){
                maxCount = count;
            }
        }else{
            count = 0;
        }
    }
    return maxCount;
}

int main(){
    vector<int> v = {1,0,1,1,1,0};
    int x = findMaxConsecutiveOnes(v);
    cout << x << endl;
}