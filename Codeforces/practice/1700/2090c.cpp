#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;

// TODO
void solve() {
  int n;
  cin >> n;
  uint8_t tables[9*224][9*224];
  for (int i = 0; i < n; i++) {
    int guest;
    cin >> guest;
    if (guest) {
      // assign nearest
    } else {
      // assign available
    }
    // return answer
    cout << "1 1\n";
  }
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
