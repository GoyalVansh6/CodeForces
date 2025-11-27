#include <bits/stdc++.h>
using namespace std;

bool checkPalindromeWithoutTrailingZeroes(string s){
    int left = 0;
    int right = s.size() - 1;

    while(left <= right && s[left] == '0') left++;
    while(left <= right && s[right] == '0') right--;

    while(left <= right){
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

void fxn(){
    int n;
    cin >> n;
    string s = "";
    int count = 0;
    
    while(n){
        s.push_back(((n & 1) ? '1' : '0'));
        count += n & 1;
        n = n >> 1;
    }
    
    cout << (((count & 1) == 0 && checkPalindromeWithoutTrailingZeroes(s)) ? "YES" : "NO") << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        fxn();
    }
}
