#include <iostream>
using namespace std;

long long merge(vector<int>& arr,int low, int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    long long count = 0;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left++]);
        }else{
            count += (mid - left + 1);
            temp.push_back(arr[right++]);
        }
    }

    while(left <= mid){
        temp.push_back(arr[left++]);
    }

    while(right <= high){
        temp.push_back(arr[right++]);
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }

    return count;
}


long long mergeSort(vector<int>& arr, int low, int high){
    if(low >= high) return 0;
    
    int mid = low + (high - low) / 2;
    long long cnt = 0;
    cnt += mergeSort(arr,low,mid);
    cnt += mergeSort(arr,mid + 1,high);
    cnt += merge(arr,low,mid,high);

    return cnt;
}

int main(){
    vector<int> nums = {2, 4, 1, 3, 5};

    cout << mergeSort(nums,0,nums.size() - 1) << endl;
}