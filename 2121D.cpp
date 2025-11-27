#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& a, vector<pair<int, int>>& v, int operation, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j+1]);
                v.push_back({operation, j+1});
            }
        }
    }
}

void fxn(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int,int>> v;

    for(auto& i : a){
        cin >> i;
    }

    for(auto& i : b){
        cin >> i;
    }

    bubbleSort(a, v, 1, n);
    bubbleSort(b, v, 2, n);

    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            swap(a[i], b[i]);
            v.push_back({3, i+1});
        }
    }

    cout << v.size() << endl;
    for(auto& i : v){
        cout << i.first << " " << i.second << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}