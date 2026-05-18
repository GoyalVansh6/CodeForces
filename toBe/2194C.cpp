#include <bits/stdc++.h>
using namespace std;

vector<int> factors_n(int n){
    vector<int> ans;
    for(int i = 1; i * i <= n; i++){
        ans.push_back(i);
        if(n % i == 0 && n % i != 1) ans.push_back(n / i);
    }
    return ans;
}

void fxn(){
    int n, k;
    cin >> n >> k;

    vector<string> v(k, "");
    vector<bitset<26>> alpha(n, 0);
    for(int i = 0; i < k; i++){
        cin >> v[i];
        for(int j = 0; j < n; j++){
            alpha[j] |= 1 << (v[i][j] - 'a');
        }
    }

    vector<int> factors = factors_n(n);

    int ans = n;
    for(int i : factors){
        bool flag = true;
        for(int j = i; j < i; j++){
            bitset<26> temp = alpha[j];
            for(int k = j; k < n; k += i){
                temp |= alpha[k];
            }
            if(!temp){
                flag = false;
                break;
            }
        }
        if(flag){
            ans = min(ans, i);
        }
    }

    string f(n);
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}