#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int good = 0;
		for(int j = 0; j < n/2; j++){
			if(s[j] != s[n-j-1]){
				good++;
			}
		}
		cout << "Case #" << i+1 << ": " << abs(k-good) << "\n";
	}
	return 0;
}

