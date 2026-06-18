#include <iostream>
using namespace std;

 int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for(int x : nums) {

            sum += x;

            count += mp[sum - k];

            mp[sum]++;
        }

        return count;
    }

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int count = 0;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == k){
                count++;
            }
        }
    }
    cout << count << endl;
}