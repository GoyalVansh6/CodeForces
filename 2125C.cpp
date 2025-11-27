#include <bits/stdc++.h>
using namespace std;

void fxn(long long n, long long m) {
    long long ans = n - m;
    ans -= n/2 + n/3 + n/5 + n/7 - (m/2 + m/3 + m/5 + m/7);
    ans += (n/6 + n/10 + n/14 + n/15 + n/21 + n/35) - (m/6 + m/10 + m/14 + m/21 + m/15 + m/35);
    ans -= n/30 + n/42 + n/70 + n/105 - (m/30 + m/42 + m/70 + m/105);
    ans += n/210 - m/210;
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> m >> n;
        fxn(n, m-1);
    }
}
