#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int leftShift = (n << 1) - 1;
    int ans = n ^ leftShift;
    cout << ans << endl;
    return 0;
}


