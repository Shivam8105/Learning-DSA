#include <iostream>
using namespace std;

void solve(int index, vector<int>& candidates, int target,vector<vector<int>>& ans,vector<int> current){
    if(target == 0){
        ans.push_back(current);
        return;
    }
    if(index == candidates.size() || target < 0){
        return;
    }
    current.push_back(candidates[index]);
    solve(index,candidates,target - candidates[index], ans,current);
    current.pop_back();

    solve(index + 1,candidates,target,ans,current);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> current;
        solve(0,candidates,target,ans,current);
        return ans;
    }

int main(){

}