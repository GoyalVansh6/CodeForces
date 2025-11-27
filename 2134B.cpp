#include <bits/stdc++.h>
using namespace std;
#define mod(a, b) ((long long)((a) - (b) * floor((long double)(a) / (b))))

void fxn() {
  long long n, k;
  cin >> n >> k;
  vector<long long> v(n);

  for (auto &i : v) {
    cin >> i;
  }
  for (long long i = 0; i < n; i++) {
    long long temp = mod(v[i], (k + 1));
    v[i] += temp * k;
  }

  for (long long i : v) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    fxn();
  }
}