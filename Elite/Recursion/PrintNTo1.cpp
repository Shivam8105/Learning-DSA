#include <iostream>
using namespace std;

void rec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    rec(n - 1);
}

int main()
{
    int n;
    cin >> n;
    rec(n);
}