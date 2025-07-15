#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i = 0; i < 10; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    cout << "Enter the number to find the last occurence: ";
    int x;
    cin >> x;
    for(int i = v.size() - 1; i >= 0; i--){
        if(v[i] == x){
            cout << i << " ";
            return 0;
        }
    }
    cout << endl;
    
}