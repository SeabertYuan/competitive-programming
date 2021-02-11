#include <bits/stdc++.h>

using namespace std;

//2/5
int main(){
	int k,m;
	cin >> k >> m;
	vector<int> friends;
	//insert 1-k
	for(int i = 1; i <= k; i++)
			friends.push_back(i);
	//go through m times
	for(int i = 0; i < m; i++){
		int remove;
		cin >> remove;
		for(int j = 0; j < k; j++){
			if((j+1)%remove == 0){
				friends[j] = k+1;
			}
		}
		sort(friends.begin(), friends.end());
	}
	for(int i = 0; i < k; i++){
		if(friends[i] != k+1)
			cout << friends[i] << "\n";
	}
	return 0;
}
