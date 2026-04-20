#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int k;
    cin >> k;

    if(k == 2 || k == 4 || k % 5 == 2 || k % 5 == 4){
        cout << "NO" << endl;
        return;
    }

    int n = 0;
    vector<int> mine_cols;
    if(k == 1){
        n = 1;
        mine_cols.push_back(0);
    }
    else if(k % 5 == 3){
        int m = (k - 3) / 5 + 1;
        n = 3 * (m - 1) + 2;
        for (int i = 0; i < m; i++) mine_cols.push_back(i * 3);
    }
    else if(k % 5 == 1){
        int m = (k - 6) / 5 + 2;
        n = 3 * (m - 1) + 1;
        for (int i = 0; i < m; i++) mine_cols.push_back(i * 3);
    }
    else if(k % 5 == 0){
        int m = k / 5;
        n = 3 * m;
        for (int i = 0; i < m; i++) mine_cols.push_back(i * 3 + 1);
    }

    cout << "YES" << endl;
    cout << n << endl;
    string s1(n, '.'), s2(n, '.');
    for (int c : mine_cols) s1[c] = '*';
    cout << s1 << endl;
    cout << s2 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}