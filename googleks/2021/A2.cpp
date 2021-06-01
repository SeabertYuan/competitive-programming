#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int r, c;
		cin >> r >> c;
		vector<vector<int>> grid;
		for(int j = 0; j < r; j++){
			vector<int> x;
			for(int k = 0; k < c; k++){
				int n;
				cin >> n;
				x.push_back(n);
			}
			grid.push_back(x);
		}
	}
	return 0;
}

