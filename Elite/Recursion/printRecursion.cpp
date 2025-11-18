#include <iostream>
using namespace std;

void rec(int n){
    if(n == 0){
        return;
    }
    cout << "I love Recursion" << endl;
    rec(n - 1);
}

int main(){
    int n;
    // string s;
    // getline(cin,s);
    cin >> n;
    rec(n);
}