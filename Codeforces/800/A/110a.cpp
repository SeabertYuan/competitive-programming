#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int lucky = 0;
	for (char c: s) {
		if (c == '7'|| c == '4') {
			lucky++;
		}
	}
	if (lucky == 7 || lucky == 4) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}

