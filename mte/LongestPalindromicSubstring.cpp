#include <iostream>
using namespace std;

// Brute Force Approach - O(n3)

// bool isPal(string &s, int i, int j)
// {
//     while (i <= j)
//     {
//         if (s[i] != s[j])
//         {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

// string longestPalindrome(string s)
// {
//     int n = s.size();
//     int maxLen = 0;
//     string ans = "";

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (isPal(s, i, j))
//             {
//                 if (j - i + 1 > maxLen)
//                 {
//                     maxLen = j - i + 1;
//                     ans = s.substr(i, maxLen);
//                 }
//             }
//         }
//     }
//     return ans;
// }

// Optimal

string longestPalindrome(string s)
{
    int n = s.size();
    int start = 0;
    int maxLen = 1;

    auto expand = [&](int left, int right)
    {
        while (left >= 0 && right < n && s[left] == s[right])
        {
            int len = right - left + 1;
            if (len > maxLen)
            {
                start = left;
                maxLen = len;
            }
            left--;
            right++;
        }
    };

    for (int i = 0; i < n; i++)
    {
        expand(i, i);
        expand(i, i + 1);
    }
    return s.substr(start, maxLen);
}

int main()
{
    string s;
    cin >> s;
    cout << longestPalindrome(s) << endl;
}
