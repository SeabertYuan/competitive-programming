#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		if (c == 'A')
			x++;
		else
			x--;
	}
	if (x > 0)
		cout << "Anton" << "\n";
	else if (x < 0)
		cout << "Danik" << "\n";
	else
		cout << "Friendship" << "\n";
	return 0;
}

