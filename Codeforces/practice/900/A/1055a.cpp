#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
  int n, s;
  cin >> n >> s;
  int to[n + 1];
  int from[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> to[i];
  }
  for (int i = 1; i <= n; i++) {
    cin >> from[i];
  }
  if (!to[1]) {
    cout << "NO\n";
    return;
  }
  if (to[s]) {
    cout << "YES\n";
    return;
  }
  int n_start = 0;
  for (int i = s + 1; i <= n; i++) {
    if (to[i] && from[i])
      n_start = i;
  }
  if (!n_start) {
    cout << "NO\n";
  } else if (from[s]) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
