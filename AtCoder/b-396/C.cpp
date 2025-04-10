#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5 * 2;
const ll MOD = 1e9 + 7;

void solve() {
  int n, m;
  cin >> n >> m;
  int sum = 0;
  int black[n];
  int white[m];
  for (int i = 0; i < n; i++) {
    cin >> black[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> white[i];
  }
  sort(black, black + n);
  sort(white, white + m);
  m--;
  n--;
  for (int i = m; i >= 0; i--) {
    if (white[i] > 0 && white[i] + black[n] > 0) {
      sum += white[i] + black[n];
      n--;
    } else {
      break;
    }
  }
  for (int i = n; i >= 0; i--) {
    if (black[i] > 0) {
      sum += black[i];
    } else {
      break;
    }
  }
  cout << sum << "\n";
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
