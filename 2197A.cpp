#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int Ans = 0;
    while(n){
        Ans += n % 10;
        n /= 10;
    }
    return Ans;
}

void fxn(){
    int x;
    cin >> x;

    int Ans = 0;

    for(int i = x + 1; i <= x + 90; i++){
        if(i - sumOfDigits(i) == x) Ans++;
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