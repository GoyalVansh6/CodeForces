#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n, k;
    cin >> n >> k;

    vector<long long> a(n, 0);

    for(long long& i : a){
        cin >> i;
    }

    sort(a.begin(), a.end());

    if(k >= 3){
        cout << 0 << endl;
        return;
    }

    long long mini = a[0];
        
    for(int i = 1; i < n; i++){
        mini = min(mini, a[i] - a[i - 1]);
    }
    
    if(k == 1){
        cout << mini << endl;        
        return;
    }

    if(k == 2){
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                long long temp = a[i] - a[j];
                auto it = lower_bound(a.begin(), a.end(), temp) - a.begin();
                if(it < n){
                    mini = min(mini, a[it] - temp);
                }
                if(it > 0){
                    mini = min(mini, temp - a[it - 1]);
                }
            }
        }
        cout << mini << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}