#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        const int INF = 1e9;
        vector<int> dp(6);

        for (int face = 0; face < 6; face++)
        {
            dp[face] = (a[0] == face + 1 ? 0 : 1);
        }

        for (int i = 1; i < n; i++)
        {
            vector<int> next_dp(6, INF);

            for (int curr = 0; curr < 6; curr++)
            {
                int change_cost = (a[i] == curr + 1 ? 0 : 1);

                for (int prev = 0; prev < 6; prev++)
                {
                    if (curr != prev && curr + prev != 5)
                    {
                        next_dp[curr] = min(next_dp[curr],
                                            dp[prev] + change_cost);
                    }
                }
            }

            dp = next_dp;
        }
        int answer = *min_element(dp.begin(), dp.end());
        cout << answer << "\n";
    }

    return 0;
}
