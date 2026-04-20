#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;

    vector<int> v(n, 0);
    vector<int> dp(n + 1, 1e9);

    for(int& i : v){
        cin >> i;
        dp[i] = 1;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sqrt(i); j++){
            if(i % j == 0) dp[i] = min(dp[i], dp[j] + dp[i / j]);
        }
    }

    for(int i = 1; i <= n; i++){
        if(dp[i] == 1e9){
            cout << -1 << " ";
        }
        else{
            cout << dp[i] << " ";
        }
    }

    cout << endl;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        fxn();
    }
}