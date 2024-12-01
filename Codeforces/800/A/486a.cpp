#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(ll n) {
  if (n % 2 == 0) {
    cout << n / 2 << "\n";
  } else {
    cout << -1 * (n + 1) / 2 << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tc = 1;
  // cin >> tc;
  for (int t = 1; t <= tc; t++) {
    // cout << "Case #" << t << ": ";
    ll x;
    cin >> x;
    solve(x);
  }
}
