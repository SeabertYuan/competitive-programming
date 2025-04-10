#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;

void solve() {
  float x;
  cin >> x;
  if (x >= 38.0) {
    cout << 1 << "\n";
  } else if (x >= 37.5) {
    cout << 2 << "\n";
  } else {
    cout << 3 << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tc = 1;
  // cin >> tc;
  for (int t = 1; t <= tc; t++) {
    // cout << "Case #" << t << ": ";
    solve();
  }
}
