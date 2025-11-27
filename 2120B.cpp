#include <bits/stdc++.h>
using namespace std;

main() {
  int t;
  cin >> t;
  while (t--) {
    int n, s;
    int Ans = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
      int dx, dy, x, y;
      cin >> dx >> dy >> x >> y;
      if (dx == dy)
        Ans += (x == y);
      else
        Ans += (x + y == s);
    }
    cout << Ans << endl;
  }
}