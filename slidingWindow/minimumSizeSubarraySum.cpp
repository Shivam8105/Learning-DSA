#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int target;
    cin >> target;

    int len = INT_MAX;

    int i = 0;
    int j = 0;
    int sum = 0;

    while(j < n){
        sum += nums[j];

        while(sum >= target){
            len = min(len,j - i + 1);
            sum -= nums[i];
            i++;
        }
        j++;
    }
    cout << len << endl;
}