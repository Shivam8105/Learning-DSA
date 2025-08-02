#include <iostream>
using namespace std;

string reverseWords(string s){
    int n = s.length();
    reverse(s.begin(),s.end());

    string word = "";
    string ans = "";

    for(int i = 0; i < s.length(); i++){
        while(i < n && s[i] != ' '){
            word += s[i];
        }
        reverse(word.begin(),word.end());
        if(word.length() > 0){
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

int main(){

}