#include <iostream>
#include <cmath>
using namespace std;

bool squareSum(int c){
    long long left = 0;
    long long right = sqrt(c);
    while(left <= right){
        long long sum = left * left + right * right;
        if(sum == c) return true;
        else if(sum < c) left++;
        else right--;
    }
    return false;
}

int main() {
	// your code goes here
    int c;
    cin >> c;
    bool ans = squareSum(c);
    if(ans) cout << "true" << endl;
    else cout << "false" << endl;
	return 0;
}