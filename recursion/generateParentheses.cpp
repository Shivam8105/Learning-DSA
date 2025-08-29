#include <iostream>
#include <string>
#include <vector>
using namespace std;

void helper(vector<string>& ans, string s, int open, int close, int n) {
    if (open + close == 2 * n) {
        ans.push_back(s);
        return;
    }
    if (open < n) helper(ans, s + '(', open + 1, close, n);
    if (close < open) helper(ans, s + ')', open, close + 1, n);
}

vector<string> generateParenthesis(int n) {
    string s;
    vector<string> ans;
    helper(ans, s, 0, 0, n);
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<string> result = generateParenthesis(n);
    for (const auto& ans : result) {
        cout << ans << endl;
    }
    return 0;
}
