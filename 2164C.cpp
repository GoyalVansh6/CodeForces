#include <bits/stdc++.h>
using namespace std;

void fxn() {
    int n, m;
    cin >> n >> m;

    vector<int> b(m), c(m);
    multiset<int> a;
    multiset<pair<int,int>> ms;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    for(int i = 0; i < m; i++){
        cin >> c[i];
        if (c[i] > 0)
            ms.insert({b[i], c[i]});
    }

    int cnt = 0;

    while(!ms.empty()) {
        auto it_ms = ms.begin();
        int first = it_ms->first;
        int second = it_ms->second;
        ms.erase(it_ms);

        auto it_a = a.lower_bound(first);
        if (it_a != a.end()) {
            cnt++;

            int val = *it_a;
            a.erase(it_a);

            a.insert(max(val, second));
        }
    }

    for(int i = 0; i < m; i++){
        if (c[i] == 0)
            ms.insert({b[i], c[i]});
    }

    while(!ms.empty()) {
        auto it_ms = ms.begin();
        int first = it_ms->first;
        int second = it_ms->second;
        ms.erase(it_ms);

        auto it_a = a.lower_bound(first);
        if (it_a != a.end()) {
            cnt++;
            a.erase(it_a);
        }
    }

    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        fxn();
    }
}
