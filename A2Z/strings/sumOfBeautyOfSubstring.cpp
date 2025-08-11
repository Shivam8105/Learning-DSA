#include <iostream>
#include <string>

using namespace std;

int beautySum(string s) {
    int n = s.length();
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int hash[26] = {0}; // reset for each starting index
        for (int j = i; j < n; j++) {
            hash[s[j] - 'a']++; // add current char to frequency
            int maxFreq = 0, minFreq = INT_MAX;
            for (int k = 0; k < 26; k++) {
                if (hash[k] > 0) { // only consider letters present
                    maxFreq = max(maxFreq, hash[k]);
                    minFreq = min(minFreq, hash[k]);
                }
            }
            sum += (maxFreq - minFreq);
        }
    }
    return sum;
}



int main(){
    string s = "aabcbaa";
    int sum = beautySum(s);
    cout << sum << endl;
}
