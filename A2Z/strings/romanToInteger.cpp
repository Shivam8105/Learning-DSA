#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;    

int main(){
    unordered_map<char, int> romanToIntMap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;
    int res = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if(i + 1 < n && romanToIntMap[s[i]] < romanToIntMap[s[i + 1]]) {
            res -= romanToIntMap[s[i]];
        } else {
            res += romanToIntMap[s[i]];
        }
    }
    cout << "The integer value is: " << res << endl;
    return 0;
}