#include <iostream>
using namespace std;

// Brute Force Approach - O(n3)

bool isPal(string &s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string longestPalindrome(string s)
{
    int n = s.size();
    int maxLen = 0;
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (isPal(s, i, j))
            {
                if (j - i + 1 > maxLen)
                {
                    maxLen = j - i + 1;
                    ans = s.substr(i, maxLen);
                }
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
}