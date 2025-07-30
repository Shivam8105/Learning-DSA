#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    int mid;
    if(n % 2 == 0){
        mid = n / 2;
    }else{
        mid = n / 2 + 1;
    }
    reverse(s.begin(),s.begin()+mid);
    cout << s << endl;
}