#include <iostream>
#include <vector>


using namespace std;

double minMaxDist(vector<int> &stations, int K) {
        int n = stations.size();
        vector<int> howMany(n - 1, 0);

        for (int gasStation = 0; gasStation < K; gasStation++) {
            double max_value = -1;
            int max_index = -1;

            for (int j = 0; j < n - 1; j++) {
                double diff = stations[j + 1] - stations[j];
                double sectionLength = diff / (double)(howMany[j] + 1);
                if (sectionLength > max_value) {
                    max_value = sectionLength;
                    max_index = j;
                }
            }

            howMany[max_index]++;
        }

        double maxAns = -1;
        for (int i = 0; i < n - 1; i++) {
            double diff = stations[i + 1] - stations[i];
            double sectionLength = diff / (double)(howMany[i] + 1);
            maxAns = max(maxAns, sectionLength);
        }

        return maxAns;
    }

int main(){
    int n;
    cin >> n;

    vector<int> nums;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int k;
    cin >> k;

    double ans = minMaxDist(nums,k);
    cout << ans << endl;
}