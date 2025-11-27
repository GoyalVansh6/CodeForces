#include <bits/stdc++.h>
using namespace std;

void fxn() {
    int n, k;
    cin >> n >> k;
    vector<tuple<int,int,int>> all(n);

    for (int i = 0; i < n; i++) {
        int l, r, real;
        cin >> l >> r >> real;
        all[i] = {l, r, real};
    }

    sort(all.begin(), all.end());

    for (int i = 0; i < n; i++) {
        int l = get<0>(all[i]);
        int r = get<1>(all[i]);
        int real = get<2>(all[i]);

        if (r < k || l > k) continue;
        else k = max(k, real);
    }

    cout << k << "\n";
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        fxn();
    }
}
