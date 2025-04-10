#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
  int n;
  cin >> n;
  vector<vector<int>> a;
  a.reserve(n);
  for (int i = 0; i < n; i++) {
    a[i].reserve(n);
  }
  for (int i = 1; i <= n; i++) {
    for (int j = n + 1 - i; j >= i; j--) {
      // fill
      for (int x = i - 1; x < j; x++) {
        for (int y = i - 1; y < j; y++) {
          if (i % 2) {
            a[x][y] = 1;
          } else {
            a[x][y] = 0; // white
          }
        }
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (a[i - 1][j - 1]) {
        cout << "#";
      } else {
        cout << ".";
      }
    }
    cout << "\n";
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
