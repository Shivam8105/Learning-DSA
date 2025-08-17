#include <iostream>
using namespace std;

void towerOfHanoi(int n, char A, char B, char C){
    if(n == 0){
        return;
    }
    towerOfHanoi(n - 1,A,C,B);
    cout << "Move disk " << n << " from rod " << A << " to rod " << C << endl;
    towerOfHanoi(n - 1,B,A,C);
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n,'A','B','C');
	return 0;
}