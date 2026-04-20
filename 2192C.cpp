#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    long long h, k;
    cin >> n >> h >> k;

    long long sum = 0;
    vector<long long> v(n);
    for(auto& i : v){
        cin >> i;
        sum += i;
    }

    long long comp_clips = h / sum;
    long long rem_h = h % sum;
    long long ans_time = 0;

    if(rem_h == 0){
        if(comp_clips > 0)
            ans_time = comp_clips * n + (comp_clips - 1) * k;
        else
            ans_time = 0;
        cout << ans_time << endl;
        return;
    }

    ans_time = comp_clips * n + comp_clips * k;

    vector<long long> pre_min(n);
    pre_min[0] = v[0];
    for(int i = 1; i < n; i++) pre_min[i] = min(pre_min[i - 1], v[i]);

    vector<long long> suf_max(n);
    suf_max[n - 1] = v[n - 1];
    for(int i = n - 2; i >= 0; i--) suf_max[i] = max(suf_max[i + 1], v[i]);

    long long current_sum = 0;
    int min_bullets = n;

    for(int i = 0; i < n; i++){
        current_sum += v[i];
        long long max_gain = 0;
        if(i < n - 1){
            long long mn = pre_min[i];
            long long mx = suf_max[i + 1];
            if(mx > mn) max_gain = mx - mn;
        }
        if(current_sum + max_gain >= rem_h){
            min_bullets = i + 1;
            break;
        }
    }

    cout << ans_time + min_bullets << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}

/*

5, 10, 1
4, 2, 3, 5, 3


*/