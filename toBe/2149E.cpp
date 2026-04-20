#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n, k, l, r;
    cin >> n >> k >> l >> r;

    int left = 0;
    int right = 0;

    vector<int> v(n, 0);

    for(int& i : v){
        cin >> i;
    }

    unordered_map<int, int> m;
    int Ans = 0;

    while(right < n){
        while(right < n && right - left + 1 < l){
            m[v[right]]++;
            right++;
        }
        while(left  <= right && right - left + 1 > r){
            m[v[left]]--;
            if(m[v[left]] == 0) m.erase(v[left]);
            left++;
        }
        
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

/*

1 2 1 3 2
5

1 2
2 1
1 2 1
1 3
3 2

left = 0, right = 0;


*/