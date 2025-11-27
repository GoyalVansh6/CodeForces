#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(n);
    a[0] = 1;
    for (int i = 1; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, matches = 0;
    while (i < n && j < n) {
        if (a[i] < b[j]) {
            matches++;
            i++;
            j++;
        } else {
            j++;
        }
    }

    int removals = n - matches;
    cout << removals << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
