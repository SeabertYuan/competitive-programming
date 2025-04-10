#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;

void solve() {
  string s;
  cin >> s;
  int idx = 0;
  for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'i' && (i+idx + 1)%2 == 0) {
        idx++;
      }
      if (s[i] == 'o' && (i+idx + 1)%2 == 1) {
        idx++;
      }
  }
  if ((s.length()+idx)%2 != 0) {
    cout << idx+1 << "\n";
  } else {
    cout << idx << "\n";
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
