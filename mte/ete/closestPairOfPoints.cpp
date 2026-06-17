#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <iostream>

using namespace std;

double dist(vector<double>& a, vector<double>& b){
    double dx = a[0] - b[0];
    double dy = a[1] - b[1];
    return sqrt(dx * dx + dy * dy);
}

double solve(vector<vector<double>>& p,int l, int r){
    if(r - l <= 3){
        double ans = INT_MAX;
        for(int i = l; i <= r; i++){
            for(int j = i + 1; j <= r; j++){
                ans = min(ans,dist(p[i],p[j]));
            }
        }
        return ans;
    }
    int mid = l + (r - l) / 2;
    double dl = solve(p,l,mid);
    double dr = solve(p,mid + 1,r);
    return min(dl,dr);
}

double minDistance(vector<vector<double>>& points){
    sort(points.begin(),points.end());
    return solve(points,0,points.size() - 1);
}

int main(){
    vector<vector<double>> points = {
        {-1,-2},
        {0,0},
        {1,2},
        {2,3}
    };

    cout << minDistance(points) << endl;
}