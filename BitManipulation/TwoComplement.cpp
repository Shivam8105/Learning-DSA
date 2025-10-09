#include <iostream>
using namespace std;

int main(){

    string s = "11011";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            s[i] = '0';
        }else{
            s[i] = '1';
        }
    }
     int carry = 1;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == '1' && carry == 1){
            s[i] = '0';
            carry = 1;
        }else if(s[i] == '0' && carry == 1){
            s[i] = '1';
            carry = 0;
        }
    }
    if(carry == 1) s += '1';
    cout << s << endl;
}