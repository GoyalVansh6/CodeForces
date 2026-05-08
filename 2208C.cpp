#include <bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;

    long double ans = 0;

    vector<pair<long double, long double>> pairs(n, {0, 0});
    for(int i = 0; i < n; i++){
        cin >> pairs[i].first >> pairs[i].second;
    }

    for(int i = n - 1; i >= 0; i--){
        ans = max(ans, (1 - pairs[i].second / 100.0) * ans + pairs[i].first);
    }

    cout << fixed << setprecision(10) << ans << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        fxn();
    }
}

/*

10 0
20 5

10 5
10 80
20 5

20 + 

*/