#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	unordered_map<char, int> freq;

	for (char c: s) {
		freq[c]++;
	}
	if (freq.size() % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}

	return 0;
}
