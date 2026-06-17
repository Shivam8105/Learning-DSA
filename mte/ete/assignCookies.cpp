#include <iostream>
using namespace std;

int assignCookie(vector<int>& g, vector<int>& s){
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());

    int n = g.size();
    int m = s.size();

    int i = 0,j = 0;
    int count = 0;

    while(i < n && j < m){
        if(s[j] >= g[i]){
            count++;
            i++;
        }
        j++;
    }
    return count;
}

int main(){
    vector<int> g = {1,2,3};
    vector<int> s = {1,1};

    cout << assignCookie(g,s) << endl;
}