#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n, k;
    cin >> n >> k;
    vector<int> heights(n);
    for(auto& i : heights){
        cin >> i;
    }

    int currLevel = heights[k-1];
    int diff = heights[k-1] - 0;

    sort(heights.begin(), heights.end());

    int i = 0;
    while(heights[i] < currLevel) i++;
    
    while(i < n){
        if(heights[i] - currLevel > diff){
            cout << "NO" << endl;
            return;
        }
        currLevel = heights[i];
        i++;
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