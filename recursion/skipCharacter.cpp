// #include <iostream>
// using namespace std;

// void skip(vector<int>& ans,vector<int>& original,int idx){
//     if(idx == original.size()){
//         for(int i = 0; i < ans.size(); i++){
//             cout << ans[i] << " ";
//         }
//         return;
//     }
//     int ch = original[idx];
//     if(ch == 1) skip(ans,original,idx + 1);
//     else{
//         ans.push_back(original[idx]);
//         skip(ans,original,idx + 1);
//     } 
// }

// int main(){
//     vector<int> v = {1,2,1,3,1,4,5};
//     vector<int> ans;
//     skip(ans,v,0);
// }

#include <iostream>
using namespace std;

void skipCharacters(string& result, const string& original, int idx, char ch) {
    // Base case: reached the end of the string
    if (idx == original.length()) {
        cout << result;
        return;
    }

    char currentChar = original[idx];

    // If current character is not the one to skip, append it
    if (currentChar != ch) {
        result += currentChar;
    }

    skipCharacters(result, original, idx + 1, ch);
}
int main(){
    string s;
    getline(cin,s);
    char ch;
    cin >> ch;
    string ans = "";
    skipCharacters(ans,s,0,ch);
}