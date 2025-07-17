#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(70);
    v.push_back(60);
    v.push_back(50);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(10);
    v.push_back(5);
    v.push_back(0);

    //! Printing values

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    //! Removal of elements

    v.pop_back();
    v.pop_back();

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    //! Size and capacity of vector

    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    //! taking input in vector

    // for(int i = 0; i < 5; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // for(int i = 0; i < v.size(); i++){
    //     cout << v.at(i) << " ";
    // }
    // cout << endl;
    // v.at(2) = 10;
    //  for(int i = 0; i < v.size(); i++){
    //     cout << v.at(i) << " ";
    // }
    // cout << endl;

    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;

}