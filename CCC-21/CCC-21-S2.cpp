#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, n, k;
	cin >> m >> n >> k;
	int row = 0, col = 0;
	bool repeat = false;
	vector<string> moves;

	for(int i = 0; i < k; i++){
		char c;
		int x, l = moves.size();
		cin >> c >> x;
		for(int j = 0; j < l; j++){
			if(c+ to_string(x) == moves[j]){
				repeat = true;
				break;
			}
		}
		if(!repeat){
			moves.push_back(c + to_string(x));
			if(c == 'R')
				row++;
			else
				col++;
		}
	}
	cout << row*n+col*m - 2*row*col;
	return 0;
}

