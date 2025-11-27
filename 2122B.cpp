#include <iostream>
using namespace std;

void fxn() {
  int n;
  cin >> n;
  long long Ans = 0;

  for (int i = 0; i < n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (c > a) {
      Ans += c - a;
    }
    if (b > d) {
      Ans += min(a, c) + (b - d);
    }
  }
  cout << Ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    fxn();
  }
}
