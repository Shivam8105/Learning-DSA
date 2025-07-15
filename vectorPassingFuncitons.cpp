#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> &a){
    a[0] = 100;
    // for(int i = 0; i < a.size(); i++){
    //     cout << a.at(i) << " ";
    // }
    // cout << endl;
}

int main(){
    vector<int> v;
    v.push_back(70);
    v.push_back(60);
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
    change(v);

    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}