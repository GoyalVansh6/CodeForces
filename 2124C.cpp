#include<bits/stdc++.h>
using namespace std;

int getGCD(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long getLCM(int a, int b){
    return ((long long)a*b)/getGCD(a, b);
}

void fxn(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(auto& i : v){
        cin >> i;
    }

    long long curr = 1;

    for(int i = n - 1; i > 0; i--){
        int temp = getGCD(v[i], v[i-1]);
        int a = v[i-1]/temp;
        curr = getLCM(curr, a);
        v[i-1] = temp;
    }

    cout << curr << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}