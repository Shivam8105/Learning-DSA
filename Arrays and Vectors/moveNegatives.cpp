#include <iostream>
#include <vector>
using namespace std;

void moveNegatives(vector<int> &v) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        if (v[i] < 0) {
            int temp = v[i];
            int j = i - 1;
            // Shift all non-negative elements right
            while (j >= 0 && v[j] >= 0) {
                v[j + 1] = v[j];
                j--;
            }
            v[j + 1] = temp;
        }
    }
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    moveNegatives(v);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
