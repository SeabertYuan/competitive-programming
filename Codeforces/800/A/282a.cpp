#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < 3; j++) {
			if (s[j] == '+') {
				a++;
				break;
			}
			else if (s[j] == '-') {
				a--;
				break;
			}
		}
	}
	cout << a;
	return 0;
}

