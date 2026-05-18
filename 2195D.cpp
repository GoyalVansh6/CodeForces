#include <bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;

    vector<long long> v(n, 0);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> ans(n, 0);
    int sum = (v[0] + v[n - 1]) / (n - 1);

    vector<long long> pair_diff(n + 1, 0);
    pair_diff[0] = sum;

    for(int i = 1; i < n; i++){
        pair_diff[i] = v[i - 1] - v[i];
    }

    pair_diff[n] = -sum;
    int temp = 0;

    for(int i = n - 1; i >= 0; i--){
        ans[i] = ((pair_diff[i] - temp) - (pair_diff[i + 1] - temp)) / 2;
        temp += ans[i];
    }

    for(int i : ans){
        cout << i << " ";
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

/*

a2 + 2a3 + 3a4 + ___ + (n - 1)an

a1 + a3 + 2a4 + ___ + (n - 2)an
|
|
|
(n - 1)a1 + (n - 2)a2 + ___ + a(n - 1)

f_1 - f_2 = -a1 + a2 + a3 + a4 + a5 + ___ + an
f_2 - f_3 = -a1 - a2 + a3 + a4 + a5 + ___ + an
|
|
|
f_n-1 - f_n = -a1 - a2 - a3 - ___ - an-1 + an

for all negative addition, we can add all and divide by sigma 1 - n-1

*/