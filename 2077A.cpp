#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;

    vector<long long> v(2 * n, 0);
    for(long long& i : v){
        cin >> i;
    }

    sort(v.begin(), v.end());

    vector<long long> Ans(2 * n + 1, 0);
    long long res = 0;

    for(int i = 0; i < n - 1; i++){
        Ans[2 * i + 1] = v[i];
        res -= v[i];
    }

    for(int i = 0; i < n + 1; i++){
        Ans[2 * i] = v[n - 1 + i];
        res += v[n - 1 + i];
    }

    Ans[2 * n - 1] = res;

    for(long long i : Ans){
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