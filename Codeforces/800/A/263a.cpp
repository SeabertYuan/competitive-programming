#include <bits/stdc++.h>

using namespace std;

int main(){
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int x;
			cin >> x;
			if (x == 1) {
				cout << abs(2-i) + abs(2-j);
				break;
			}
		}
	}
	return 0;
}
