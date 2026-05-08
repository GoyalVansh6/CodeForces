#include<bits/stdc++.h>
using namespace std;

class SegmentTree{
    int n;
    vector<long long> tree;
    vector<int> a;

public:
    SegmentTree(int n, vector<int>& a){
        this -> n = n;
        tree.assign(4 * n, 0);
        this -> a = a;
        buildTree(0, n - 1, 0);
    }

    void buildTree(int l, int r, int idx){
        if(l == r){
            tree[idx] = a[l];
            return;
        }

        buildTree(l, l + (r - l) / 2, 2 * idx + 1);
        buildTree(l + (r - l) / 2 + 1, r, 2 * idx + 2);

        tree[idx] = tree[2 * idx + 1] & tree[2 * idx + 2];
    }

    int query_fxn(int ql, int qr){
        return query(0, n - 1, ql, qr, 0);
    }

    int query(int l, int r, int ql, int qr, int idx){
        if(qr < l || ql > r){
            return 0xFFFFFFFF;
        }
        
        if(ql <= l && r <= qr){
            return tree[idx];
        }
        
        int mid = l + (r - l) / 2;
        int left_res = query(l, mid, ql, qr, 2 * idx + 1);
        int right_res = query(mid + 1, r, ql, qr, 2 * idx + 2);
        
        return left_res & right_res;
    }

};

void fxn(){
    int n;
    cin >> n;
    vector<int> a(n, 0);

    for(int& i : a){
        cin >> i;
    }

    int q;
    cin >> q;
    
    SegmentTree st(n, a);

    while(q--){
        int l, k;
        cin >> l >> k;
        
        // Binary search for rightmost index

        int ans = -1;

        int lo = l - 1, hi = n - 1;

        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;

            if(st.query_fxn(l - 1, mid) >= k){
                ans = mid + 1;
                lo = mid + 1;
            }
            else{   
                hi = mid - 1;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}