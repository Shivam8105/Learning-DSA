#include <iostream>

using namespace std;

// print n to 1

int hello(int n){
    if(n == 1) return 1;
    cout << n << endl;
    return hello(n - 1);
}

// print 1 to n

int print(int num,int n){
    if(num == n) return n;
    cout << num << endl;
    return print(num + 1, n);
}

void print_2(int n){
    if(n == 0) return;
    print_2(n - 1);
    cout << n << endl;
}

int main(){
    cout << hello(5);
    cout << endl;
    cout << endl;
    cout << print(1,5);
    cout << endl;
    cout << endl;
    print_2(5);
}