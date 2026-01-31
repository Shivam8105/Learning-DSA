#include <iostream>
#include <vector>

using namespace std;

int n;
long long W;
vector<long long> w,v;
// vector<vector<long long> dp;
long long maxProfit;


long long knapsack(long long index,long long val,vector<long long>& v){
    if(val == 0) return 0;

    if(index == n) return INT_MAX;

    long notTake = knapsack(index + 1,val,v);
    long take = INT_MAX;
    if(val >= v[index]){
        take = knapsack(index + 1,val - v[index],v);

    }
    return min(take,notTake);
}

int main(){
    int n;
    cin >> n;
    w.resize(n);
    v.resize(n);
    for(long long i = 0; i < n; i++){
        cin >> w[i] >> v[i];
    }

    for(long long i = 0; i < n; i++){
        maxProfit += v[i];
    }

    
}