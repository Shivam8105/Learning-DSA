#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int maxIndex = 0;
    char maxDigit = s[0];

    for(int i = 0; i < s.length(); i++){
        if(maxDigit < s[i]){
            maxDigit = s[i];
            maxIndex = i;
        }
    }
    cout << maxIndex << endl;
}