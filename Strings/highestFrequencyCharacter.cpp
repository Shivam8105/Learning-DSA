#include <iostream>
#include <string>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.length();

    int max = 0;
    for(int i = 0; i < n; i++){
        char ch = s[i];
        int count = 1;
        for(int j = i + 1; j < n; j++){
            if(ch == s[j]) count++;
        }
        if(count > max) max = count;
    }

    for(int i = 0; i < n; i++){
        char ch = s[i];
        int count = 1;
        for(int j = i + 1; j < n; j++){
            if(ch == s[j]) count++;
        }
        if(count == max){
            cout << ch << " " << max << endl;
        }
    }
}