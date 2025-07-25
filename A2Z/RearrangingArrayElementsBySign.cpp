#include <iostream>
#include <vector>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums){
    int n = nums.size();
    int posIndex = 0;
    int negIndex = 1;
    vector<int> v(n,0);
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            v[posIndex] = nums[i];
            posIndex += 2;
        }else{
            v[negIndex] = nums[i];
            negIndex += 2;
        }
    }
    return v;
}

int main(){
    vector<int> v = {3,1,2,-2,-5,-6};
    vector<int> g = rearrangeArray(v);
    for(int i = 0; i < g.size(); i++){
        cout << g[i] << " ";
    }
    cout << endl;
}