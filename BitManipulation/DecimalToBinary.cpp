#include <iostream>

using namespace std;

int main(){
    string s = "";
    int decimal = 27;
    while(decimal > 0){
        s += decimal % 2 + '0';
        decimal /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}