#include <bits/stdc++.h>

using namespace std;

bool ifPrefix(vector<string> &s){
	for(int i = 1; i < 3; i++){
		if(s[i] != s[i-1])
			return false;
	}
	return true;
}
bool ifSuffix(vector<string> &s){
	for(int i = 1; i < 3; i++){
		if(s[i] > s[0]){
			for(int j = 0; j < s[0].length(); j++){
				if(s[0][j] != s[i][j])
					return false;
			}
		}
	}
	return true;
}
int main(){
	int n;
	vector<vector<string>> collection;
	for(int j = 0; j < n; j++){
		vector<string> colSet;
		for(int i = 0; i < 3; i++){
			cin >> colSet;
		}
		collection.push_back(colSet);
	}
	for(int i = 0; i < n; i++){
		if(ifPrefix(collection[i]) && ifSuffix(collection[i]))
			cout << "No" << "\n";
		else
			cout << "Yes" << "\n";
	}
	return 0;
}

