#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n, m;
    cin >> n >> m;
    vector<string> a;
    
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        string t = to_string(temp);
        reverse(t.begin(), t.end());
        a.push_back(t);
    }

    int Ans = 0;

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++){
        int idx = 0;
        int count = 0;
        while(a[i][idx] == '0'){
            count++;
            idx++;
        }
        Ans += (i & 1) ? a[i].size() : a[i].size() - count;
    }

    cout << (Ans >= m + 1 ? "Sasha" : "Anna") << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}