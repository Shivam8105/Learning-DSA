#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string arr[6] = {"0123","0023","456","00182","940","002901"};
    int max = stoi(arr[0]);
    string maxS = arr[0];

    for(int i = 1; i <= 5; i++){
        int x = stoi(arr[i]);
        if(max < x){
            max = x;
            maxS = arr[i];
        }
    }
    cout << max << maxS << endl;
}