#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i;
    cin >> i;
    n = n | (1 << i);
    cout << n << endl;
}