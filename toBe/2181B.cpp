#include <bits/stdc++.h>
using namespace std;

void fxn(){
    int n, m;
    cin >> n >> m;

    priority_queue<int> a;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push(temp);
    }

    priority_queue<int> b;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        b.push(temp);
    }

    int turn = 0;
    while(!a.empty() && !b.empty()){
        if(turn & 1){
            int temp = b.top();
            int temp_b = a.top();
            a.pop();
            if(temp_b - temp > 0){
                a.push(temp_b - temp);
            }
        }
        else {
            int temp = a.top();
            int temp_b = b.top();
            b.pop();
            if(temp_b - temp > 0){
                b.push(temp_b - temp);
            }
        }

        turn++;
    }

    if(a.size() > 0){
        cout << "Alice" << endl;
    }
    else {
        cout << "Bob" << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}