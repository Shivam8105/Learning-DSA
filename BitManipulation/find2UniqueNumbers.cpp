#include <iostream>
using namespace std;

int main(){
    vector<int> nums;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res ^ nums[i];
    }
    int temp = res;
    int first = res ^ (res - 1);
    int second = temp ^ first;
    cout << first << " " << second << endl;
}