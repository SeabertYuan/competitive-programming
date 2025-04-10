#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;

void solve() {
  int q;
  cin >> q;
  vector<int> cards(100, 0);
  while (q) {
    int c, x;
    cin >> c;
    if (c == 1) {
      cin >> x;
      cards.push_back(x);
    }
    if (c == 2) {
      cout << cards.back() << "\n";
      cards.pop_back();
    }
    q--;
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
