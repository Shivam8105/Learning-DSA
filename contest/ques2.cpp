#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for(int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        bool possible = true;
        
        for(int i = 1; i <= n; i++) {
            int x = i;
            int y = arr[i];

            while(x % 2 == 0) {
                x /= 2;
            }

            while(y % 2 == 0) {
                y /= 2;
            }

            if(x != y) {
                possible = false;
                break;
            }
        }

        if(possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
