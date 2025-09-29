#include <iostream>
#include <vector>

using namespace std;

long long minimumTime(vector<int>& time, int totalTrips) {
    int n = time.size();
    long long trip_time = 1;
    while (true) {
        long long trips = 0;
        for (int i = 0; i < n; i++) {
            trips += trip_time / time[i];
        }
        if (trips >= totalTrips) return trip_time;
        trip_time++;
    }
    return -1;
}


int main(){
    int n;
    cin >> n;
    vector<int> time;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        time.push_back(x);
    }
    int totalTrips;
    cin >> totalTrips;

    long long ans = minimumTime(time,totalTrips);
    cout << ans << endl;
}