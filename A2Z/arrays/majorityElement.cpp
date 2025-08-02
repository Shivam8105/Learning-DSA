#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    int num;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            num = nums[i];
        }
        else if (num == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return num;
}

int main()
{
    vector<int> n = {2,2,1,1,1,2,2};
    int v = majorityElement(n);
    cout << v << endl;
}