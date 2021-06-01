#include <bits/stdc++.h>

using namespace std;
bool sortCol(const vector<int>& v1, const vector<int>& v2){
	return v1[0] < v2[0];
}
int main(){
	int n;
	cin >> n;
	vector<vector<int>> pwd;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			int x;
			cin >> x;
			pwd[i].push_back(x);
		}
	}
	sort(pwd.begin(), pwd.end(), sortCol);
	vector<int> pos;
	for(int i = 0; i < n; i++){
		pos.push_back(pwd
	return 0;
}
