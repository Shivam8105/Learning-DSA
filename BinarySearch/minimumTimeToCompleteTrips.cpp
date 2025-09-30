#include <iostream>
#include <vector>

using namespace std;

// long long minimumTime(vector<int>& time, int totalTrips) {
//     int n = time.size();
//     long long trip_time = 1;
//     while (true) {
//         long long trips = 0;
//         for (int i = 0; i < n; i++) {
//             trips += trip_time / time[i];
//         }
//         if (trips >= totalTrips) return trip_time;
//         trip_time++;
//     }
//     return -1;
// }

bool check(long long mid, vector<int>& time, int totalTrips){
    long long trips = 0;
    for(int i = 0; i < time.size(); i++){
        trips += mid / time[i];
        if(trips >= totalTrips) return true;
    }
    return false;
}

long long minimumTime(vector<int>& time, int totalTrips){
    int mx = -1;
    for(int i = 0; i < time.size(); i++){
        if(time[i] > mx){
            mx = time[i];
        }
    }
    long long low = 1;
    long long high = (long long) mx * totalTrips;
    long long ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(check(mid,time,totalTrips)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
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