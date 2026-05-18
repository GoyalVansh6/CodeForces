#include <bits/stdc++.h>
using namespace std;

void fxn(){
    int n;
    cin >> n;

    vector<int> v(n, 0);
    for(int& i : v) cin >> i;

    stack<int> st;
    int count = 1;

    st.push(v[0]);
    for(int i = 1; i < n; i++){
        while(!st.empty() && st.top() != v[i] - 1){
            st.pop();
        }

        if(st.empty()){
            count++;
        }
        st.push(v[i]);
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

/*

1 2 5 6 5
1 1 2 2 3: count
0 1 0 1

*/