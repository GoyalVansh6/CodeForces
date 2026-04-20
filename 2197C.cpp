#include<bits/stdc++.h>
using namespace std;

void fxn(){
    unsigned long long p, q;
    cin >> p >> q;

    if(q <= p){
        cout << "Alice" << endl;
        return;
    }

    if(q * 2 == 3 * p){
        cout << "Bob" << endl;
        return;
    }

    long long high = p;
    long long low = 0;

    while(low <= high){
        long long mid = low + (high - low) / 2;
        // cout << mid << " ";
        if((q - mid) * 2 == 3 * (p - mid)){
            cout << "Bob" << endl;
            return;
        }
        else if((q - mid) * 2 < 3 * (p - mid)){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    cout << "Alice" << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}