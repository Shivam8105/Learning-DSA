#include <iostream>
using namespace std;

int dp[20][2][20];
    int solve(string& num, int idx, int tight, int count) {
        if (idx == num.size()) {
            return count;
        }

        if (dp[idx][tight][count] != -1) {
            return dp[idx][tight][count];
        }

        int lb = 0;
        int ub = (tight == 1) ? num[idx] - '0' : 9;

        long long res = 0;

        for (int digit = lb; digit <= ub; digit++) {
            int newTight = (tight == 1 && digit == ub) ? 1 : 0;
            int newCount = count + (digit == 1);
            res += solve(num, idx + 1, newTight, newCount);
        }
        return dp[idx][tight][count] = res;
    }
    
    int countDigitOne(int n) {
        string num = to_string(n);
        memset(dp, -1, sizeof(dp));

        return solve(num, 0, 1, 0); //(num,index,tight,count)
    }

int main(){

}