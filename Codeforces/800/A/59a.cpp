#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = 0;
	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i]))
			n++;
	}
	if (n > s.length()/2)
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	else
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s;
	return 0;
}

