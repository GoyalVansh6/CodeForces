#include <bits/stdc++.h>
#include <ranges>

using namespace std;

namespace views = std::views;
namespace ranges = std::ranges;

void fxn() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);
    for (int &i : v) cin >> i;

    vector<int> inner;
    for(int i = x; i < y; i++){
        inner.push_back(v[i]);
    }

    vector<int> outer;
    for(int i = 0; i < x; i++){
        outer.push_back(v[i]);
    }
    for(int i = y; i < n; i++){
        outer.push_back(v[i]);
    }

    int inner_min_index = min_element(inner.begin(), inner.end()) - inner.begin();
    
    ranges::rotate(inner, inner.begin() + inner_min_index);
    
    int inner_min_element = inner[0];

    int i = 0;
    while(i < outer.size() && outer[i] < inner_min_element){
        cout << outer[i] << " ";
        i++;
    }

    for(int j = 0; j < inner.size(); j++){
        cout << inner[j] << " ";
    }

    for(int j = i; j < outer.size(); j++){
        cout << outer[j] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        fxn();
    }

    return 0;
}