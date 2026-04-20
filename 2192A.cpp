#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n == 1){
        cout << 1 << endl;
        return;
    }

    int blocks = 1;
    for(int i = 1; i < n; i++){
        if(s[i] != s[i - 1]){
            blocks++;
        }
    }

    if(blocks > 1 && s[0] == s[n - 1]) blocks--;

    if(blocks == 1){
        cout << 1 << endl;
    }
    else if(blocks == n){
        cout << n << endl;
    }
    else{
        cout << blocks + 1 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}