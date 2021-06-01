#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b;
	cin >> n >> a >> b;
	int max_capacity = b;
	int answer = max_capacity;
	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		max_capacity = max_capacity - a + b;
		answer = max(answer, max_capacity);
	}
	cout << answer << endl;

	return 0;
}
