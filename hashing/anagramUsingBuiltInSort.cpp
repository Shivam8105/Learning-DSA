#include <iostream>
#include <string>

using namespace std;
int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a == b){
        cout << "a is anagram of b or vice versa" << endl;
    }else{
        cout << "a is not the anagram of b or vice versa" << endl;
    }
}