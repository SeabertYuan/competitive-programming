#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> location;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		location.push_back(pair<int, int>(x,y));
	}
	return 0;
}

