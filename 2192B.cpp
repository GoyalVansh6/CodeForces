#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count_1 = 0;
    for(char c : s){
        if(c == '1') count_1++;
    }
    int count_0 = n - count_1;

    if(count_1 == 0){
        cout << 0 << endl;
    }
    else if((count_1 & 1) == 0){
        cout << count_1 << endl;
        for(int i = 1; i <= n; i++){
            if(s[i - 1] == '1'){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    else if((count_0 & 1) == 1){
        cout << count_0 << endl;
        for(int i = 1; i <= n; i++){
            if(s[i - 1] == '0'){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}

/*

10101
01110

yynny
10010

nynny
11101

0 - y
1 - n
01 - y
11 - y
111
1111
1000
0011


111 0000
000 0 11


*/