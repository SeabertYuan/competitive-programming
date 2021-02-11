#include <bits/stdc++.h>

using namespace std;
int solve(vector<int> stone, int n){
	int cost = stone[n-1];
	if(stone[0] < stone[n-1]){
		for(int i = 1; i < n; i++){
			for(int j = 0; j < i; j++){
				if(stone[j] >= stone[n-1])
					cost = min(cost, stone[j] - stone[n-1]);
			}
		}
	}
	return cost;
}
int main(){
	int n;
	cin >> n;
	vector<int> stones;
	for(int i = 0; i < n; i++){
		int h;
		cin >> h;
		stones.push_back(h);
	}
	cout << solve(stones, n);
	return 0;
}
