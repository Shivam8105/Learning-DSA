#include <iostream>
#include <vector>

using namespace std;
vector<long long> seg;
vector<long long> lazy;


void build(int l, int r, int idx, vector<long long>& nums){
    if(l == r){
        seg[idx] = nums[l];
        return;
    }
    int mid = l + (r - l) / 2;
    build(l,mid,2 * idx + 1,nums);
    build(mid + 1,r,2 * idx + 2,nums);
    seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
}

void update(int l, int r, int idx, int ql, int qr,int val){
    if(lazy[idx] != 0){
        seg[idx] += lazy[idx] * (r - l + 1);
        if(l != r){
            lazy[2 * idx + 1] += lazy[idx];
            lazy[2 * idx + 2] += lazy[idx];
        }
        lazy[idx] = 0;
    }

    if(r < ql || qr < l) return;

    if(ql <= l && r <= qr){
        seg[idx] += (r - l + 1) * val;
        if(l != r){
            lazy[2 * idx + 1] += val;
            lazy[2 * idx + 2] += val;
        }
        return;
    }

    int mid = l + (r - l) / 2;
    update(l,mid,2 * idx + 1,ql,qr,val);
    update(mid + 1,r,2 * idx + 2,ql,qr,val);
    seg[idx] = seg[2*idx+1] + seg[2*idx+2];
}

long long query(int l, int r, int idx, int ql, int qr){
    if(lazy[idx] != 0){
        seg[idx] += lazy[idx] * (r - l + 1);
        if(l != r){
            lazy[2 * idx + 1] += lazy[idx];
            lazy[2 * idx + 2] += lazy[idx];
        }
        lazy[idx] = 0;
    }
    if(r < ql || qr < l) return 0;

    if(ql <= l && r <= qr) return seg[idx];

    int mid = (l + r)/2;
    return query(l,mid,2 * idx + 1,ql,qr) + query(mid + 1,r,2 * idx + 2,ql,qr);
}

int main(){
    int n,q;
    cin >> n >> q;
    seg.resize(4 * n);
    lazy.assign(4 * n,0);

    vector<long long> nums(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> nums[i];
    }
    build(1,n,1,nums);

    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int a,b,val;
            cin >> a >> b >> val;
            update(1,n,1,a,b,val);
        }else{
            int k;
            cin >> k;
            cout << query(1,n,1,k,k) << endl;
        }
    }
}