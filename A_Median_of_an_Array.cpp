#include <bits/stdc++.h>
 
using namespace std;
 
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    int id = (n - 1) / 2;
    int ans = 1;
    while (id < n - 1 && a[id] == a[id + 1]) {
      id += 1;
      ans += 1;
    }
    cout << ans << '\n';
  }
  return 0;
}
