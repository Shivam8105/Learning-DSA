#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int hash[26] = {0};

    for(int i = 0; i < s.length(); i++){
        hash[s[i] - 'a']++;
    }
    int max = 0;
    char maxChar;
    for(int i = 0; i < 26; i++){
        if(max < hash[i]){
            max = hash[i];
            maxChar = 'a' + i;
        }
    }
    cout << maxChar << " " << max << endl;
}