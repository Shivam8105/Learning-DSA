//! dutch flag algorithm

//! 3 pointer approach

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums){
    int low = 0; 
    int mid = 0;
    int high = nums.size() - 1;

    while(mid <= high){
        if(nums[mid] == 2){
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }else if(nums[mid] == 0){
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            low++;
            mid++;
        }else if(nums[mid] == 1){
            mid++;
        }
    }
    return;
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sortColors(v);
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}