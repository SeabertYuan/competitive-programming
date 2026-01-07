#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  int ans[2*n] = {0};
  int sum = (2*n)*(2*n + 1)/2;
  for (int y = 0; y < n; y++) {
    for (int x = 0; x < n; x++) {
      int p;
      cin >> p;
      if ((y == 0 && x == 0) || x == y || x == y-1) {
        ans[y+x + 1] = p;
        sum -= ans[y+x+1];
      }
    }
  }
  ans[0] = sum;
  for (int i = 0; i < 2*n-1; i++) {
    cout << ans[i] << " ";
  }
  cout << ans[2*n-1] << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // int tc = 1;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    // cout << "Case #" << t << ": ";
    solve();
  }
}
