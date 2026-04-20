#include <bits/stdc++.h>
using namespace std;

void fxn() {
    int n;
    cin >> n;

    vector<int> p(n), a(n);
    for (int &i : p) cin >> i;
    for (int &i : a) cin >> i;

    unordered_map<int, pair<int,int>> m;

    for (int i = 0; i < n; i++){
        if(!m.count(a[i])){
            m[a[i]] = {i, i};
        } 
        else{
            m[a[i]].first = min(m[a[i]].first, i);
            m[a[i]].second = max(m[a[i]].second, i);
        }
    }

    int temp = -1;
    for(int i = 0; i < n; i++){
        if(m.count(p[i]) && m[p[i]].first < temp){
            cout << "NO" << endl;
            return;
        }
        temp = max(temp, m[p[i]].second);
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        fxn();
    }
}
