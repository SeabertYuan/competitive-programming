#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector<int> l;
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			l.push_back(x);
		}
		int cost = 0;
		for (int j = 0; j < n-1; j++) {
			int lowest = l[j];
			int lowest_index = j;
			for (int k = j+1; k < n; k++) {
				if (l[k] < lowest) {
					lowest = l[k];
					lowest_index = k;
				}
			}
			cost += lowest_index-j+1;
			reverse(l.begin()+j, l.begin()+lowest_index+1);
		}
		cout << "Case #" << i+1 << ": " << cost << endl;
	}
	return 0;
}

