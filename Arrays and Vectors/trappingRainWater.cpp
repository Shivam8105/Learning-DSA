#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &height){
    int n = height.size();

    //finding Previous Greatest Element

    int arr1[n];
    int max = height[0];
    arr1[0] = -1;
    for(int i = 1; i < n; i++){
        arr1[i] = max;
        if(max < height[i]) max = height[i];
    }

    //finding Next Greatest Element

    int arr2[n];
    arr2[n - 1] = -1;
    int max2 = height[n - 1];
    for(int i = n - 2; i >= 0; i++){
        arr2[i] = max2;
        if(max2 < height[i]) max2 = height[i]; 
    }

    //finding the minimum of the two arrays of arr1 and arr2

    int k = 0;
    int arr3[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr1[i] < arr2[j]){
                arr3[k] = arr1[i];
                k++;
            }else{
                arr3[k] = arr2[j];
                k++;
            }
        }
    }

    // subtracting arr3 elements from the height array to calculate the units of water

    int sum = 0;
    int i = 0;
    while(i < n){
        int diff = arr3[i] - height[i];
        if(diff < 0){
            continue;
        }else{
            sum += diff;
        }
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> height;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        height.push_back(x);
    }
    int rainWaterUnits = trap(height);
    cout << rainWaterUnits << " ";
}