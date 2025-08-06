#include <iostream>
#include <string>
using namespace std;

int maxDepth(string s) {
    int max_depth = 0, current_depth = 0;
    for (char c : s) {
        if (c == '(') {
            current_depth++;
            max_depth = max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        }
    }
    return max_depth;
}

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
   int depth = maxDepth(s);
    cout << "Maximum nesting depth: " << depth << endl;
    return 0;
}
