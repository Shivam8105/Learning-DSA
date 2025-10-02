#include <iostream>
using namespace std;

bool check(vector<int> &bloomDay, int m, int k, int day)
{
    int flower = 0;
    int bouquet = 0;

    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= day)
        {
            flower++;
        }
        else
        {
            bouquet += flower / k;
            flower = 0;
        }
    }
    bouquet += flower / k;
    return bouquet >= m;
}

int minDays(vector<int> &bloomDay, int m, int k)
{
    if ((long long)m * k > bloomDay.size())
        return -1;
    int low = 1LL * (*min_element(bloomDay.begin(), bloomDay.end()));
    int high = 1LL * (*max_element(bloomDay.begin(), bloomDay.end()));
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(bloomDay, m, k, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        bloomDay.push_back(x);
    }
    int m;
    cin >> m;
    int k;
    cin >> k;

    int minimumDays = minDays(bloomDay, m, k);
    cout << minimumDays << endl;
}