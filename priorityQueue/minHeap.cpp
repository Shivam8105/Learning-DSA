#include <iostream>

using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> pq;

    pq.push(10);
    pq.push(30);

    pq.push(20);
    pq.push(40);

    cout << pq.size() << endl;
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}