#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;

void solve() {
  int n, k;
  cin >> n >> k;

  int stones[n];
  for (int i = 0; i < n; i++) {
    cin >> stones[i];
  }

  int soln[n] = {0}; // worst case we jump every time

  // soln[0] = 0 since not jumping would incur no cost
  // base case n = 2, regardless of k => | h_0 - h_1 |
  soln[1] = abs(stones[0] - stones[1]);
  if (n == 2) {
    cout << soln[1] << "\n";
    return;
  }
  // soln[0] represents the jump made to the 2nd rock (each soln represents one jump)
  // otherwise, soln[i] =  min(
  //                          soln[i-1] + | h_(i-1) - h_(i) |, 
  //                          soln[i-2] + | h_(i-2) - h_(i) |,
  //                          ...
  //                          soln[i-k] + | h_(i-k) - h_(i) | )
  for (int i = 2; i < n; i++) {
    soln[i] = soln[i-1] + abs(stones[i-1] - stones[i]);
    for (int j = 2; j <= k; j++) {
      if (j > i) break;
      soln[i] = min(soln[i], soln[i-j] + abs(stones[i-j] - stones[i]));
    }
  }
  cout << soln[n-1] << "\n";
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
