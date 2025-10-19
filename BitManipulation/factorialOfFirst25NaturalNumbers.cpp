#include <iostream>
using namespace std;

int main() {
    const int MOD = 1e9 + 7;

    for (int i = 1; i <= 25; i++) {
        long long factorial = 1;

        for (int j = 1; j <= i; j++) {
            factorial = (factorial * j) % MOD;
        }

        cout << "Factorial of " << i << " = " << factorial << endl;
    }

    return 0;
}
