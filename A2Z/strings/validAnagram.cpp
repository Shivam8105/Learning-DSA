#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    int count[26] = {0};
    for (char c : s)
        count[c - 'a']++;
    for (char c : t)
        count[c - 'a']--;
    for (int i = 0; i < 26; ++i)
        if (count[i] != 0)
            return false;
    return true;
}

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;
    if (isAnagram(s, t))
        cout << "Anagram" << endl;
    else
        cout << "Not Anagram" << endl;
    return 0;
}
