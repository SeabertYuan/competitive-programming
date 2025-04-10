#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

bool lt(char &c1, char &c2) {
  cout << "? " << c1 << " " << c2 << "\n" << flush;
  char ans;
  cin >> ans;
  return ans == '<';
}

void mergesort(vector<char> &in, int lo, int hi) {
  if (hi - lo <= 1)
    return;
  int mid = (hi - lo) / 2 + lo;
  if (hi - lo > 2) {
    mergesort(in, lo, mid);
    mergesort(in, mid, hi);
  }
  vector<char> left;
  vector<char> right;
  for (int i = lo; i < mid; i++) {
    left.push_back(in[i]);
  }
  for (int i = mid; i < hi; i++) {
    right.push_back(in[i]);
  }
  int i = 0, j = 0;
  int k = lo;
  while (i < mid - lo && j < hi - mid) {
    if (!lt(left[i], right[j])) {
      in[k] = right[j];
      j++;
    } else {
      in[k] = left[i];
      i++;
    }
    k++;
  }
  while (i < mid - lo) {
    in[k] = left[i];
    i++;
    k++;
  }
  while (j < hi - mid) {
    in[k] = right[j];
    j++;
    k++;
  }
}

void solve() {
  int N, Q;
  cin >> N >> Q;
  vector<char> ans;
  for (int i = 0; i < N; i++) {
    ans.push_back(0x41 + i);
  }
  mergesort(ans, 0, N);
  cout << "! ";
  for (int i = 0; i < N; i++) {
    cout << ans[i];
  }
  cout << "\n" << flush;
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
