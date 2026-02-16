#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

long long dp[20][2][11][2];

long long solve(string num,int idx,int tight,int prev,int leadingZero){
    if (idx >= (int)num.size()) return 1;

    if(dp[idx][tight][prev][leadingZero] != -1) return dp[idx][tight][prev][leadingZero];

    int lb = 0;
    int ub = (tight == 1) ? num[idx] - '0' : 9;
    long long res = 0;

    for(int digit = lb; digit <= ub; digit++){
        int newTight = (tight == 1 && digit == ub) ? 1 : 0;
        int newLz = (leadingZero == 1 && digit == 0) ? 1 : 0;

        int newPrev = newLz ? 10 : digit; 

        if(newLz == 0 && prev == digit){
            continue;
        }
        res += solve(num,idx + 1,newTight,newPrev,newLz);
    }
    return dp[idx][tight][prev][leadingZero] = res;
}

int main(){
      memset(dp, -1, sizeof(dp));
    long long a,b;
    cin >> a >> b;

    string s1 = to_string(a - 1);
    string s2 = to_string(b);

    long long ans1 = solve(s2,0,1,10,1); // {num,idx,tight,prev,leading Zero};

    memset(dp, -1, sizeof(dp));
    long long ans2 = solve(s1,0,1,10,1);

    cout << ans1 - ans2 << endl;
    return 0;
}