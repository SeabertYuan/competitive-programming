#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, a;
	cin >> s;
	sort(s.begin(), s.end());
	for (int i = s.length()/2; i < s.length(); i++) {
		a += s[i];
		if (i == s.length() - 1) {
			break;
		}
		a += s[i - s.length()/2];
	}
	cout << a << endl;
	return 0;
}
