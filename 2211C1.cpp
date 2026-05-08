#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int free_start = n - k;
    int free_end = k - 1;

    if(free_start > free_end){
        for(int i = 0; i < n; i++){
            if(b[i] != -1 && b[i] != a[i]){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
        return;
    }

    vector<bool> in_A_free(n + 1, false);
    for(int i = free_start; i <= free_end; i++){
        in_A_free[a[i]] = true;
    }

    vector<bool> seen_b(n + 1, false);
    for(int i = 0; i < n; i++){
        if(i >= free_start && i <= free_end){
            if(b[i] != -1){
                if(!in_A_free[b[i]]){
                    cout << "NO\n";
                    return;
                }
                if (seen_b[b[i]]) {
                    cout << "NO\n";
                    return;
                }
                seen_b[b[i]] = true;
            }
        }
        else{
            if(b[i] != -1 && b[i] != a[i]){
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}