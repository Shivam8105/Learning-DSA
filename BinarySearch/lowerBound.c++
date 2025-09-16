#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int x){
    int low = 0;
    int high = n - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == x) return arr[mid - 1];
        else if(arr[mid] < x) low = mid + 1;
        else if(arr[mid] > x) high = mid - 1;
    }
    return -1;
}

int main(){
    int arr[14] = {1,2,3,4,5,6,7,8,9,12,14,15,17,19};
    int ans = lowerBound(arr,14,17);
    cout << ans << endl;
}