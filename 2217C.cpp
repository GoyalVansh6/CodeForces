#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        cout << ((gcd(n, a) == 1) && (gcd(m, b) == 1 && (gcd(n, m) <= 2)) ? "YES" : "NO") << "\n";
    }
}