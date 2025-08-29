#include <iostream>
#include <vector>
using namespace std;

void combination(vector<vector<int>>& ans,vector<int> v, vector<int>& candidates,int target,int index){
    if(target == 0){
        ans.push_back(v);
        return;
    }
    if(target < 0) return;
    for(int i = index; i < candidates.size(); i++){
        if (i > index && candidates[i] == candidates[i - 1]) continue;
        v.push_back(candidates[i]);
        combination(ans,v,candidates,target - candidates[i],i + 1);
        v.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     sort(candidates.begin(), candidates.end()); 
    vector<vector<int>> ans;
    vector<int> v;
    combination(ans,v,candidates,target,0);
    return ans;
}


int main() {
	// your code goes here
    int n;
    cin >> n;
    vector<int> candidates;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        candidates.push_back(x);
    }
    int target;
    cin >> target;
    vector<vector<int>> result = combinationSum(candidates, target);
    for(auto& comb : result){
        for(int num : comb){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}