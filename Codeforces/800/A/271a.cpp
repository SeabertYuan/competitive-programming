#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	bool distinct = false;
	while (!distinct) {
		unordered_map<char, int> freq;
		int unique = 0;
		n++;
		s = to_string(n);
		for (int i = 0; i < 4; i++)
			freq[s[i]]++;
		for (auto x: freq) {
			unique += x.second;
		}
		if (unique == freq.size())
			distinct = true;
	}
	cout << s;
	return 0;
}

