#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 2 * 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
  int n;
  cin >> n;
  int *in = new int[n];
  unordered_map<int, int> occ;
  int curr_min = MAX_N;
  for (int i = 0; i < n; i++) {
    cin >> in[i];
    if (occ.find(in[i]) == occ.end()) {
      occ[in[i]] = i;
    } else {
      curr_min = min(i - occ[in[i]] + 1, curr_min);
      occ[in[i]] = i;
    }
  }
  if (curr_min == MAX_N)
    cout << "-1\n";
  else
    cout << curr_min << "\n";
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
