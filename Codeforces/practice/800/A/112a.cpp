#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, t;
	cin >> s >> t;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	transform(t.begin(), t.end(), t.begin(), ::tolower);
	int x = 0;

	for (int i = 0; i < s.length(); i++) {
		x = s[i] - t[i];
		if (x < 0) {
			cout << -1;
			break;
		}
		if (x > 0) {
			cout << 1;
			break;
		}
	}
	if (x == 0) {
		cout << 0;
	}
	return 0;
}
