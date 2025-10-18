#include <iostream>
using namespace std;

string decimal_to_binary(int n){
    if(n == 0) return "0";
    string binary = "";
    while(n > 0){
        binary += char('0' + (n % 2));
        n /= 2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}

int main(){
    int n = 23;
    string ans = decimal_to_binary(n);
    cout << ans << endl;
}
