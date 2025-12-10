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
    int left = 0, right = n - 1;
    int sereja = 0;
    int dima = 0;
    int turn = 0;

    while(left <= right){
        int chosen;
        if(nums[left] < nums[right]){
            chosen = nums[right];
            right--;
        }else{
            chosen = nums[left];
            left++;
        }

        if(turn == 0) sereja += chosen;
        else dima += chosen;

        turn ^= 1;
    }
    cout << sereja << " " << dima << endl;
}