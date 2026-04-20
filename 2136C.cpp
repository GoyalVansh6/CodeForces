#include <bits/stdc++.h>
using namespace std;

void fxn() {
    int n;
    cin >> n;

    vector<int> v(n);
    unordered_map<int, vector<int>> m;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]].push_back(i);
    }

    vector<int> LF(n, 0);

    for (int i = n - 1; i >= 0; i--) {
        auto &vec = m[v[i]];

        auto itr = lower_bound(vec.begin(), vec.end(), i);

        int pos = itr - vec.begin();

        if (pos + v[i] - 1 < vec.size()) {
            LF[i] = v[i];
            if(vec[pos + v[i] - 1] + 1 < n){
                LF[i] = v[i] + LF[vec[pos + v[i] - 1] + 1];
            }
        }

        if(i + 1 < n) LF[i] = max(LF[i + 1], LF[i]);
    }

    cout << *max_element(LF.begin(), LF.end()) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        fxn();
    }
}

/*

neat array
subsequence
i - j

*/