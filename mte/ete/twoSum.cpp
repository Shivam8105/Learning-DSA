#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++){
        int need = target - arr[i];
        auto it = mp.find(need);
        if(it != mp.end()){
            cout << i << " " << it -> second << endl;
        }
        mp[arr[i]] = i;
    }
    return 0;
}