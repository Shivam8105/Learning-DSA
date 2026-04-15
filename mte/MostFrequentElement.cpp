#include <iostream>
using namespace std;

int mostFreqEle(vector<int>& arr) {
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int count = 1;
        int maxCount = 1;
        int ans = arr[0];

        for(int i = 0; i < n - 1; i++){
            if(arr[i] == arr[i + 1]) {
                count++;
            } else {
                if(count > maxCount || (count == maxCount && arr[i] > ans)){
                    maxCount = count;
                    ans = arr[i];
                }
                count = 1;
            }
        }

        if(count > maxCount || (count == maxCount && arr[n - 1] > ans)){
            ans = arr[n - 1];
        }

        return ans;
    }

int main(){

}