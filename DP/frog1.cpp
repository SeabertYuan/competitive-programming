#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;

void solve_iterative() {
  int n;
  cin >> n;
  int *stone = new int[n];
  for (int i = 0; i < n; i++) cin >> stone[i];
  vector<int> dp(n+1, 0);
  dp[2] = abs(stone[1] - stone[0]);
  for (int i = 3; i <= n; i++) {
    dp[i] = min(dp[i-1] + abs(stone[i-2] - stone[i-1]), dp[i-2] + abs(stone[i-3] - stone[i-1]));
  }
  cout << dp[n] << "\n";
  delete[] stone;
}

// recursive
int getCost(int i, vector<int> &mem, int *stones) {
  if (i <= 1) return 0;
  if (i == 2) return abs(stones[i-2] - stones[i-1]);
  if (mem[i] == -1) {
    mem[i] = min(getCost(i-1, mem, stones) + abs(stones[i-2] - stones[i-1]), getCost(i-2, mem, stones) + abs(stones[i-3] - stones[i-1]));
  }
  return mem[i];
}

void solve() {
  int n;
  cin >> n;
  int *stones = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> stones[i];
  }
  vector<int> mem(n+1, -1);
  cout << getCost(n, mem, stones) << "\n";
  delete[] stones;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tc = 1;
  // cin >> tc;
  for (int t = 1; t <= tc; t++) {
    // cout << "Case #" << t << ": ";
    solve_iterative();
  }
}
