#include <iostream>
using namespace std;

string largestOddNumber(string num){
    for(int i = num.length() - 1; i >= 0; i--){
        int digit = (int)num[i];
        if(digit % 2 != 0){
            return num.substr(0,i + 1);
        }
    }
    return "";
}

int main(){
    string num;
    cin >> num;
    string ans = largestOddNumber(num);
    cout << ans << endl;
}