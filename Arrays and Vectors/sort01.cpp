#include <iostream>
#include <vector>
using namespace std;

//! Two Pass Method

// void sort01(vector<int> &v){
//     int count0 = 0;
//     int count1 = 1;
//     for(int i = 0; i < v.size(); i++){
//         if(v[i] == 0) count0++;
//         else count1++;
//     }

//     //Filling the items
//     for(int i = 0; i < v.size(); i++){
//         if(i <= count0) v[i] = 0;
//         else v[i] = 1;
//     }
// }

// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     sort01(v);
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }


//! Two Pointer Method

void sort01(vector<int> &v){
    int i = 0;
    int j = v.size() - 1;
    while(i <= j){
        if(v[j] == 1){
            j--;
        }else if(v[i] == 1 && v[j] == 0){
            swap(v[i],v[j]);
            i++;
            j--;
        }else if(v[i] == 0 ){
            i++;
        }
    }
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    // v.push_back(1);
    sort01(v);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}