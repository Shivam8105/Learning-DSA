#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp;
    while(n != 0){
        temp = n;
        n = n & (n - 1);
    }
    cout << temp << endl;
}

