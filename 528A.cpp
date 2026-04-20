#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(a < b) return GCD(b, a);
    while(b){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int n;
    cin >> n;
    map<int, int> m;

    int temp = 0;
    for(size_t i = 0; i < n*n; i++){
        cin >> temp;
        m[temp]++;
    }

    vector<int> Ans;
    Ans.reserve(n);

    for(auto i = m.rbegin(); i != m.rend();){
        if(i -> second <= 0){
            i++;
            continue;
        }
        for(int j : Ans){
            m[GCD(j, i -> first)] -= 2;
        }
        Ans.push_back(i -> first);
        m[i -> first]--;
    }

    for(int i : Ans){
        cout << i << " ";
    }

    return 0;
}