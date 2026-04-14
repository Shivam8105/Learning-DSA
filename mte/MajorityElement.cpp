//! Find the element that appears more than n/2 times in an array.


//! map approach
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    unordered_map<int,int> mp;
    for(auto it : nums){
        mp[it]++;
    }

    for(auto it : mp){
        if(it.second > n / 2){
            cout << it.first << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

//! boyer-moore voting algorithm

