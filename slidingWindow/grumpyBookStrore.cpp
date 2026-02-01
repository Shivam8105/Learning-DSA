class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(grumpy[i] == 0){
                ans += customers[i];
            }
        }

        int extra = 0;

        for(int i = 0; i < minutes; i++){
            if(grumpy[i] == 1){
                extra += customers[i];
            }
        }

        int i = 1;
        int j = minutes;
        int maxExtra = extra;

        while(j < n){
            if(grumpy[j] == 1) extra += customers[j];
            if(grumpy[i - 1] == 1) extra -= customers[i - 1];

            maxExtra = max(maxExtra,extra);
            i++;
            j++;
        }
        return ans + maxExtra;
    }
};