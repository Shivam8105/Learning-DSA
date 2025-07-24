#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n = a.size();
        int m = b.size();
        int i = 0, j = 0;
        vector<int> c;

        while(i < n && j < m){
            if(a[i] < b[j]){
                if(c.empty() || c.back() != a[i])
                    c.push_back(a[i]);
                i++;
            } else if(b[j] < a[i]){
                if(c.empty() || c.back() != b[j])
                    c.push_back(b[j]);
                j++;
            } else {
                if(c.empty() || c.back() != a[i])
                    c.push_back(a[i]);
                i++;
                j++;
            }
        }

        while(i < n){
            if(c.empty() || c.back() != a[i])
                c.push_back(a[i]);
            i++;
        }

        while(j < m){
            if(c.empty() || c.back() != b[j])
                c.push_back(b[j]);
            j++;
        }

        return c;
};



int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {1,2,7};

    vector<int> c = findUnion(a,b);
    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }
    cout << endl;
}
    