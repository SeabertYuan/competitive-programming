#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e6;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
  int n, q;
  cin >> n >> q;
  int *pigeon = new int[n + 1];
  int *swapped = new int[n + 1];
  for (int i = 1; i <= n; i++) {
    pigeon[i] = i;
    swapped[i] = i;
  }
  for (int i = 0; i < q; i++) {
    int t;
    cin >> t;
    int a, b;
    switch (t) {
    case 1: {
      cin >> a >> b;
      pigeon[a] = swapped[b];
      break;
    }
    case 2: {
      cin >> a >> b;
      int temp = swapped[a];
      swapped[a] = swapped[b];
      swapped[b] = temp;
      break;
    }
    case 3:
      cin >> a;
      int desired = pigeon[a];
      for (int j = 1; j <= n; j++) {
        if (desired == swapped[j])
          cout << j << "\n";
      }
    }
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
