#include <bits/stdc++.h>

using namespace std;

int main(){
	int k, n, w;
	cin >> k >> n >> w;
	int sum = 0;
	for (int i = 0; i < w; i++) {
		sum += (i+1)*k;
	}
	if (sum-n < 0)
		cout << 0;
	else
		cout << sum-n;
	return 0;
}
