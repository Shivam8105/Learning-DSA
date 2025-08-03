#include <iostream>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    sort(strs.begin(),strs.end());
    string first = strs[0];
    string last = strs[strs.size() - 1];
    string k = "";
    for(int i = 0; i < first.size(); i++){
        if(first[i] == last[i]) k += first[i];
        else return k;
    }
    return k;
}

int main(){
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}