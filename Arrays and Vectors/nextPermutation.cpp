#include <iostream>
#include <vector>
using namespace std;

void reversePart(int i, int j, vector<int> &nums){
    while(i <= j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}

void swap(int i, int j,vector<int> &nums){
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void display(vector<int> nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

void nextPermutation(vector<int> &nums){
    int n = nums.size();
    int idx = -1;
    for(int i = n - 2; i >= 0; i--){
        if(nums[i] < nums[i + 1]){
            idx = i;
            break;
        }
    }
    if(idx == -1){
        reversePart(0,n - 1, nums);
    }
    reversePart(idx+1,n - 1, nums);
    int j = -1;
    for(int i = idx + 1; i < n; i++){
        if(nums[i] > nums[idx]){
            j = i;
            break;
        }
    }
    swap(idx,j,nums);
    return;
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
    nextPermutation(nums);
    display(nums);
}

