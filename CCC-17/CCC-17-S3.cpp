#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	vector<int> board;
	cin >> n;
	for(int i = 0; i < n; i++){
		int k;
		cin >> k;
		board.push_back(k);
	}
	vector<int> fence;
	int point = 0;
	int r = 1;
	for(int i = n-1; i > point; i--){
		fence.push_back(board[i] + board[point]);
		if(point > 0 && fence[point] == fence[point-1])
			r++;
		point++;
	}
	if(n/2 == r)
		cout << r << " " << 1;
	else{
		double n2 = n;
		for(int i = 1; i < n; i++)
			n2 *= i;
		double x2 = n-2;
		for(int i = 1; i < n-2; i++)
			x2 *= i;
		if(r == 1)
			cout << r << " " << n2/(2*x2);
		else
			cout << r << " " << r + n2/(2*x2);
	}
	return 0;
}
