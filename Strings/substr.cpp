#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    int mid = n / 2;
    
    string str = s.substr(n / 2,n);
    cout << str << endl;
}