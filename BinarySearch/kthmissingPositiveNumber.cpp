#include <iostream>
#include <vector>

using namespace std;

int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            int missing = arr[mid] - (mid + 1);
            if(missing < k){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return high + k + 1;
    }

int main(){
    vector<int> arr = {2,3,4,7,11};
    int k = 5;
    int ans = findKthPositive(arr,k);
    cout << ans << endl;
}

