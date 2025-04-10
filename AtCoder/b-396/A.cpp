#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  vector<int> nums;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    nums.push_back(a);
  }
  for (int i = 0; i < n - 2; i++) {
    if (nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2]) {
      cout << "Yes";
      return;
    }
  }
  cout << "No";
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
