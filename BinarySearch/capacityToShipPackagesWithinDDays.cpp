#include <iostream>
#include <vector>
using namespace std;

int max(vector<int>& weights){
    int maximum = INT_MIN;
    for(int i = 0; i < weights.size(); i++){
        if(weights[i] > maximum){
            maximum = weights[i];
        }
    }
    return maximum;
}

int sum(vector<int>&weights){
    int sum = 0;
    for(int i = 0; i < weights.size(); i++){
        sum += weights[i];
    }
    return sum;
}

bool check(vector<int>& weights, int capacity, int days){
    int dayCount = 1;
    int currentLoad = 0;
    for(int i = 0; i < weights.size(); i++){
        if(currentLoad + weights[i] <= capacity){
            currentLoad += weights[i];
        }else{
            dayCount++;
            currentLoad = weights[i];
        }
    }
    if(dayCount <= days){
        return true;
    }
    return false;
}

int shipWithinDays(vector<int>& weights, int days) {
    int low = max(weights);
    int high = sum(weights);
    int ans = -1;
    while(low <= high){
        int capacity = low + (high - low) / 2;
        if(check(weights,capacity,days)){
            ans = capacity;
            high = capacity - 1;
        }else{
            low = capacity + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    int ans = shipWithinDays(weights,5);
    cout << ans << endl;
}
