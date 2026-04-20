#include<bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    std::map<char, int> mp;
    for(char c : s){
        mp[c]++;
    }

    for(auto i = mp.rbegin(); i != mp.rend(); ++i)
}

/*

b a c a b c a b
1 0 0 0 1 1 0 1
4

*/