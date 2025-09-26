#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int max(vector<int> &piles)
{
    int max = INT_MIN;
    for (int i = 0; i < piles.size(); i++)
    {
        if (max < piles[i])
        {
            max = piles[i];
        }
    }
    return max;
}

bool canEatAll(vector<int> &piles, int speed, int h)
{
    long long hours = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        int count = (piles[i] + speed - 1) / speed; 
        hours += count;
        if (hours > h)
            return false;
    }
    return hours <= h;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    int low = 1;
    int high = max(piles);
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (canEatAll(piles, mid, h))
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
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    int ans = minEatingSpeed(piles,h);
    cout << ans << endl;
}