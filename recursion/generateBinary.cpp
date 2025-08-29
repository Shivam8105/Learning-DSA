#include <iostream>
using namespace std;

void generateBinary(string s, int n){
    if(s.length() == n){
        cout << s << endl;
        return;
    }
    generateBinary(s+'0',n);
    if(s == "" || s[s.length() - 1] == '0') generateBinary(s+'1',n);
}

int main(){
    int n;
    cin >> n;
    string s;
    generateBinary(s,n);
}