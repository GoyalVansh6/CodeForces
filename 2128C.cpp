#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;
    vector<int> b(n);
    for(auto& i : b){
        cin >> i;
    }

    long long minimum = INT32_MAX;

    for(int i = 0; i < n; i++){
        if(b[i] >= 2*minimum){
            cout << "NO" << endl;
            return;
        }
        minimum = min(minimum, (long long)b[i]);
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}