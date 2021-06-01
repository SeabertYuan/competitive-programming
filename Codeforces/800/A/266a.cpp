#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a = 0;
	char temp;
	cin >> temp;
	for (int i = 1; i < n; i++) {
		char c;
		cin >> c;
		if (temp == c)
			a++;
		temp = c;
	}
	cout << a;
		
	return 0;
}

