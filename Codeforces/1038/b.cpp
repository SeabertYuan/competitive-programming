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
  int moves = 0;
  for (int i = 0; i < n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // outgoing 0s 
    if ((a - c) > 0) {
      moves += a - c;
      a = 0;
    }
    // outgoing 1s
    if ((b - d) > 0) {
      moves += b - d + a;
    }
  }
  cout << moves << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    // cout << "Case #" << t << ": ";
    solve();
  }
}
