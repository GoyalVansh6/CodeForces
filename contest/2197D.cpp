#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;

    vector<int> v(n, 0);
    for(int& i : v){
        cin >> i;
    }

    int Ans = 0;

    for(int i = 0; i < n; i++){
        if(i % v[i] != 0) continue;
        int k = i / v[i];
        for(int j = i; j < n; j += v[i]){
            if(v[j] == j/v[i] - k){
                // cout << i << " " << j << endl;
                Ans++;
            }
        }
    }

    cout << Ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}

/*

ai * aj = j - i
aj = 

*/