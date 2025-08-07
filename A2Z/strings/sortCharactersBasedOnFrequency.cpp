#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    unordered_map<char, int> frequency;
    for (char c : s) {
        frequency[c]++;
    }

    vector<pair<char, int>> freq_vector(frequency.begin(), frequency.end());
    sort(freq_vector.begin(), freq_vector.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second; 
    });

    string result;
    for (const auto& p : freq_vector) {
        result += string(p.second, p.first); 
    }

    cout << "Sorted characters based on frequency: " << result << endl;
    return 0;
}