// Find the longest common prefix among a list of strings.

#include <iostream>
using namespace std;

// Brute Force  - Vertical Scanning O(n * m);

// string longestCommonPrefix(vector<string>& strs) {
//         int n = strs.size();
//         string ans = "";

//         for(int i = 0; i < strs[0].size(); i++){
//             char ch = strs[0][i];
//             for(int j = 1; j < strs.size(); j++){
//                 if(i >= strs[j].size() || strs[j][i] != ch){
//                     return ans;
//                 }
//             }
//             ans += ch;
//         }
//         return ans;
//     }

// Better Using Sorting

string longestCommonPrefix(vector<string> &strs)
{
    int n = strs.size();
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[n - 1];
    string ans = "";

    for (int i = 0; i < strs[0].size(); i++)
    {
        if (first[i] == last[i])
        {
            ans += first[i];
        }
        else
        {
            return ans;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    cout << longestCommonPrefix(s) << endl;
}