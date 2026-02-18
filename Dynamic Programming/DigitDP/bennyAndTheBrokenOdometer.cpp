#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cstring>

using namespace std;

int solve(string& num,int idx,int tight){
    if(idx == num.size()){
        return 1;
    }
    int lb = 0;
    int ub = (tight == 1) ? num[idx] - '0' : 9;

    int res = 0;
    for(int digit = lb; digit <= ub; digit++){
        int newTight = (tight == 1 && digit == ub) ? 1 : 0;
       
        if(digit == 3) continue;

        res += solve(num,idx + 1,newTight);
    }
    return res;
}


int main(){
    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        string num = to_string(n);

        cout << solve(num,0,1) - 1 << endl;
    }
}