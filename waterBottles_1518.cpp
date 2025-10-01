#include <iostream>

using namespace std;

int numWaterBottles(int numBottles, int numExchange)
{
    int ans = numBottles;
    while (numBottles >= numExchange)
    {
        int newBottles = numBottles / numExchange;
        ans += newBottles;
        numBottles = newBottles + (numBottles % numExchange);
    }
    return ans;
}

int main()
{
    int ans = numWaterBottles(15,4);
    cout << ans << endl;
}