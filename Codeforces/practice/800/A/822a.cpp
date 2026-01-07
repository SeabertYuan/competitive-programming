#include <bits/stdc++.h>

using namespace std;

int factorial (int n) {
	int x = 1;
	while (n > 1) {
		x *= n;
		n--;
	}
	return x;
}
int main(){
	int n, m;
	cin >> n >> m;
	cout << factorial(min(n, m));
	return 0;
}

