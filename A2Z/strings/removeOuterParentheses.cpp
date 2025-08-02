#include <iostream>

using namespace std;
string removeOuterSpace(string s){
    int count = 0;
    string p = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ')') count--;
        if(count != 0) p.push_back(s[i]);
        if(s[i] == '(') count++;
    }
    return p;
}
int main(){
    string s;
    cin >> s;
    string p = removeOuterSpace(s);
    cout << p << endl;
}