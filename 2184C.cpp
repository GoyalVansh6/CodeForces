#include <bits/stdc++.h>
using namespace std;

int fxn(int n, int k, int count, unordered_map<int, int>& mp){
    if(n < k) return -1;
    if(n == k) return count;
    
    if(mp.find(n) != mp.end()) return mp[n];
    
    if(n % 2 == 0) return mp[n] = fxn(n / 2, k, count + 1, mp);
    
    int ans1 = fxn(n - n / 2, k, count + 1, mp);
    int ans2 = fxn(n / 2, k, count + 1, mp);
    
    if(ans1 == -1 && ans2 == -1) return mp[n] = -1;
    if(ans1 == -1) return mp[n] = ans2;
    if(ans2 == -1) return mp[n] = ans1;
    return mp[n] = min(ans1, ans2);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        unordered_map<int, int> mp;
        cout << fxn(n, k, 0, mp) << "\n";
    }
}