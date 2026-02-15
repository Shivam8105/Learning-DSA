#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<long long> input(n);
        for (auto &x : input)
        {
            cin >> x;
        }

        vector<long long> result(n, 0);

        long long total = 0;
        long long indexContribution = 0;

        for (int i = 1; i + 1 < n; i++)
        {
            long long value = input[i - 1] + input[i + 1] - 2LL * input[i];
            value /= 2LL;

            result[i] = value;

            total += value;
            indexContribution += value * i;
        }

        result[n - 1] = (input[0] - indexContribution) / (n - 1);
        result[0] = input[1] - input[0] + total + result[n - 1];

        for (int i = 0; i < n; i++)
        {
            cout << result[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}
