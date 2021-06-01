#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int r, c;
		cin >> r >> c;
		vector<vector<int>> house;
		for(int j =0; j < r; j++){
			vector<int> row;
			for(int k = 0; k < c; k++){
				int n;
				cin >> n;
				row.push_back(n);
			}
			house.push_back(row);
		}
	}
	return 0;
}

