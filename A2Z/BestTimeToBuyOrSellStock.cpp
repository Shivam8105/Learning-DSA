#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > bestBuy){
                maxProfit = max(maxProfit,prices[i] - bestBuy);
            }
            bestBuy = min(prices[i],bestBuy);
        }
        return maxProfit;
    }

int main(){
    vector<int> nums = {7,1,5,3,6,4};
    int profit = maxProfit(nums);
    cout << profit << endl;
}