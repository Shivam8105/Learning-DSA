#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    // precompute
    int hash[26] = {0};
    for(int i = 0 ; i < s.length(); i++){
        hash[s[i] - 'a'] += 1;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}