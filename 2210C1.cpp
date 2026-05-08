#include <bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        cin >> v[i];   
    }

    int count_ans = 0;

    if(v[0] / __gcd(v[0], v[1]) != 1) count_ans++;
    for(int i = 1; i < n - 1; i++){
        int temp1 = __gcd(v[i], v[i - 1]);
        int temp2 = __gcd(v[i], v[i + 1]);
        int lcm_temp1_temp2 = temp1 / __gcd(temp1, temp2) * temp2;
        if(v[i] / lcm_temp1_temp2 != 1) count_ans++;
    }
    if(v[n - 1] / __gcd(v[n - 1], v[n - 2]) != 1) count_ans++;

    cout << count_ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}