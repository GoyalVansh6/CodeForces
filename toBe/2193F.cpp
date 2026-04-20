#include<bits/stdc++.h>
using namespace std;

struct Hash{
    size_t operator()(const pair<int, int>& p){
        return (size_t)p.first << 32 | p.second;
    }
};

void fxn(){
    int n, Ax, Ay, Bx, By;
    cin >> n >> Ax >> Ay >> Bx >> By;

    vector<pair<int,int>> v(n, {0, 0});

    for(int i = 0; i < n; i++){
        cin >> v[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> v[i].second;
    }

    // sort(v.begin(), v.end(), [](const pair<int, int>& p1, const pair<int, int>& p2){
    //     return p1.first > p2.first;
    // });

    map<int, pair<int, int>> m;

    for(int i = 0; i < n; i++){
        m[v[i].first] = {min(v[i].second, m[v[i].first].first), max(v[i].second, m[v[i].first].second)};
    }

    // vector<int> dp(n, 0);

    unordered_map<pair<int, int>, int, Hash> dp;

    for(auto& [first, second]: m){
        
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}