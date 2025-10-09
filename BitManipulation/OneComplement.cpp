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
    cout << s << endl;
}