#include <iostream>
using namespace std;

int solve(int l, int r, vector<int>& cuts){
    if(l > r) return 0;
    int mini = 1e9;

    for(int k = l; k <= r; k++){
        int cost = cuts[r + 1] - cuts[l - 1] + solve(l,k - 1,cuts) + solve(k + 1,r,cuts);
        mini = min(cost,mini);
    }
    return mini;
}

int minCost(int n, vector<int>& cuts){
    cuts.push_back(n);
    cuts.insert(cuts.begin(),0);
    int c = cuts.size();
    return solve(1,c - 2,cuts);
}

int main(){
    vector<int> cuts = {1,3,4,5};
    int n = 7;

    cout << minCost(n,cuts) << endl;
}