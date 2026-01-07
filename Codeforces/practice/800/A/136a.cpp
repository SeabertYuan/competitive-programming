#include <bits/stdc++.h>

using namespace std;

bool second (const pair<int, int> &a, const pair<int, int> &b) {
	return (a.second < b.second);
}
int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> gift;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		gift.push_back(make_pair(i, x));
	}
	sort(gift.begin(), gift.end(), second);
	for (auto x: gift) {
		cout << x.first << " ";
	}
	return 0;
}

