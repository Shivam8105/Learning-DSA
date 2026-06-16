#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int k;
    cin >> k;

    int count = 0;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == k){
                count++;
            }
        }
    }
    cout << count << endl;
}