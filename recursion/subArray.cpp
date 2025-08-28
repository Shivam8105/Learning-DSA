#include <iostream>
using namespace std;

void subArray(vector<int> ans,vector<int> & original,int index){
    if(index == original.size()){
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    subArray(ans,original,index + 1);
    if(ans.size() == 0){
        ans.push_back(original[index]);
        subArray(ans,original,index + 1);
    }else if(ans[ans.size() - 1] == original[index - 1]){
        ans.push_back(original[index]);
        subArray(ans,original,index + 1);
    }
}

int main(){
    vector<int> v = {1,2,3};
    vector<int> ans;
    subArray(ans,v,0);
}