#include<bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;

    int og_total = 0;
    cout << "1 1 " << n << endl << flush;
    cin >> og_total;

    int new_total = 0;
    cout << "2 1 " << n << endl << flush;
    cin >> new_total;

    int window = abs(new_total - og_total);

    int low = 1;
    int high = n;

    while(low <= high){
        int og_val = 0, new_val = 0;
        int md = low + (high - low)/2;
        cout << 1 << " " << md << " " << n << endl << flush;
        cin >> og_val;
        cout << 2 << " " << md << " " << n << endl << flush;
        cin >> new_val;

        if(abs(new_val - og_val) == window) low = md + 1;
        else high = md - 1;
    }
    low--;

    cout << "! " << low << " " << low + window - 1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}