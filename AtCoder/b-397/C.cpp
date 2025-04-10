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
  int *nums = new int[n];
  unordered_map<int, int> freq;
  unordered_map<int, int> freq2;
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    if ( i < n/2) {
      freq[nums[i]]++;
    } else {
      freq2[nums[i]]++;
    }
  }
  int maxn = freq.size() + freq2.size();
  for (int i = 1; i < n/2; i++) {
    int gone = 0;
    freq[nums[n/2-i]]--;
    if ( freq[nums[n/2-i]] == 0)
      gone++;
    freq2[nums[n/2-i]]++;
    maxn = max(maxn, (int)(freq.size() - gone + freq2.size()));
    
    gone = 0;
    freq[nums[n/2-i]]++;
    freq2[nums[n/2-i]]--;
    if ( freq2[nums[n/2-i]] == 0)
      gone++;

    freq2[nums[n/2 +i]]--;
    if ( freq2[nums[n/2+i]] == 0)
      gone++;
    freq[nums[n/2+i]]++;
    maxn = max(maxn, (int)(freq.size() - gone + freq2.size()));
  }
  cout << maxn << "\n";
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
