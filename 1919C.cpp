#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;
    vector<int> a(n, 0);

    for(int& i : a){
        cin >> i;
    }

    int x = INT32_MAX, y = INT32_MAX;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(x > y){
            swap(x, y);
        }
        if(a[i] <= x){
            x = a[i];
        }
        else if(a[i] <= y){
            y = a[i];
        }
        else{
            count++;
            x = a[i];
        }
    }

    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}