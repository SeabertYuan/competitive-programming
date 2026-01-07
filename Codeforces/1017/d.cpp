#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;

// TODO
void solve() {
  string p, s;
  cin >> p >> s;
  int p_prev_count = 0, s_prev_count = 0;
  int p_ptr = 0, s_ptr = 0;
  char p_prev = p[0], s_prev = s[0];
  while (p_ptr < p.length() && s_ptr < s.length()) {
    while (p[p_ptr])
  }
  // handle break out case
  cout << "YES" << "\n";
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
