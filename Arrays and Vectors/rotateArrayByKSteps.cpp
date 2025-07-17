#include <iostream>
using namespace std;

void reversePart(int i, int j, vector<int> &v){
    while(i <= j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    cout << "No. of Steps: " ;
    int k;
    cin >> k;
    if(k > n) k = k % n;
    reversePart(0,v.size() - k - 1, v);
    reversePart(v.size() - k, v.size() - 1,v);
    reversePart(0, v.size() - 1, v);
    display(v);
}