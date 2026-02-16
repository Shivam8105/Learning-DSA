#include <iostream>
#include <vector>

using namespace std;

int dp[20][2][200];

bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    if(n % 2 == 0) return false;

    for(int i = 3; i * i <= n; i+= 2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int solve(string num,int idx,int tight,long long sum){
    if(idx == num.size()){
        return isPrime(sum);
    }
    int lb = 0;
    int ub = (tight == 1) ? num[idx] - '0' : 9;

    if(dp[idx][tight][sum] != -1) return dp[idx][tight][sum];

    long long res = 0;

    for(int digit = lb; digit <= ub; digit++){
        int newTight = (tight == 1 && digit == ub) ? 1 : 0;
        res += solve(num,idx + 1,newTight,sum + digit);
    }
    return dp[idx][tight][sum] = res;
}

int main(){
    int n;
    cin >> n;
    long long ans1;
    long long ans2;

    while(n--){
        int a,b;
        cin >> a >> b;

        string s1 = to_string(a - 1);
        string s2 = to_string(b);

        memset(dp, -1, sizeof(dp));
        ans1 = solve(s2,0,1,0);
        memset(dp, -1, sizeof(dp));
        ans2 = solve(s1,0,1,0);

        cout << ans1 - ans2 << endl;
    }
}