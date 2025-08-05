#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Your function definition
bool rotateString(string s, string goal) {
    if (s.length() != goal.length())
        return false;
    for (int i = 0; i < s.length(); i++) {
        rotate(s.begin(), s.begin() + 1, s.end());
        if (s == goal)
            return true;
    }
    return false;
}

int main() {
    string s, goal;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the goal string: ";
    cin >> goal;

    if (rotateString(s, goal)) {
        cout << "True: The goal is a rotation of s." << endl;
    } else {
        cout << "False: The goal is NOT a rotation of s." << endl;
    }

    return 0;
}
