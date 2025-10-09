#include <iostream>
using namespace std;

int main()
{
    string s = "11011";
    int ans = 0;
    int power = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            ans += pow(2, power);
        }
        power++;
    }
    cout << ans << endl;
}