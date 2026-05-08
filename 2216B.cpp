#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, c, b;
        cin >> a >> c >> b;
        long long ans = 0;

        if(a > 2 * c + b){
            ans = 2 * a + 3 * c + 2 * b + 1;
        }
        else{
            ans = 2 * a + 3 * c + 3 * b - min(a, b);
        }

        cout << ans << "\n";
    }
}