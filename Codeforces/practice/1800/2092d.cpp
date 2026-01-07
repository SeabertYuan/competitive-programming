#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int MAX_N = 1e5;
const ll MOD = 1e9 + 7;

// TODO: "don't have answer" when I should have answers (falsely returning -1)
void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> ops;
  unordered_map<char, uint8_t> substance = {{'L', 1}, {'I', 2}, {'T', 4}};
  unordered_map<uint8_t, string> substanceRev = {{1, "L"}, {2, "I"}, {4, "T"}};
  int subFreq[5] = {0};
  for (char c: s) {
    subFreq[substance[c]]++;
  }
  int freqMax = max(subFreq[1], subFreq[2]);
  freqMax = max(freqMax, subFreq[4]);
  for (int i = 0; i < n-1; i++) {
    if (subFreq[1] == subFreq[2] && subFreq[1] == subFreq[4]) {
      break;
    }
    if (s[i] != s[i+1]) {
      uint8_t missingChar = 7 - substance[s[i]] - substance[s[i+1]];
      if (subFreq[missingChar] < freqMax) {
        s.insert(i+1, substanceRev[missingChar]);
        ops.push_back(i+1);
        subFreq[missingChar]++;
        i--;
      }
    }
  }
  if (subFreq[1] == subFreq[2] && subFreq[1] == subFreq[4]) {
    cout << ops.size() << "\n";
    if (ops.size() > 0) {
      for (auto op: ops) {
        cout << op << "\n";
      }
    }
    return;
  } else {
    cout << "-1\n";
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
