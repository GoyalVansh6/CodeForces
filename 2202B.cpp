#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n % 2 == 1 && s[0] == 'b') {
        cout << "NO\n";
        return;
    }

    int start = (n % 2);

    for (int i = start + 1; i < n; i += 2) {
        if (s[i] != '?' && s[i - 1] != '?' && s[i] == s[i - 1]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}