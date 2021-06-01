#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a = 0;
	int v[n];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v[i] = x;
	}
	for (int i = 0; i < n; i++) {
		if (v[i] >= v[k-1] && v[i] > 0)
			a++;
	}
	cout << a;
	return 0;
}

