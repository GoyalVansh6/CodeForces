#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n, 0);
        for(int& i : v){
            cin >> i;
        }

        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ans = max(ans, v[i] ^ v[j]);
            }
        }

        cout << ans << "\n";
    }
}