#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int groups = 1;
	for (int i = 1; i < n; i++) {
		string x;
		cin >> x;
		if (s[1] == x[0])
			groups++;
		s = x;
	}
	cout << groups << "\n";
	return 0;
}

