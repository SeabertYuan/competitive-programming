#include <bits/stdc++.h>

using namespace std;

int main(){
	string input, compare;
	cin >> input;
	cin >> compare;
	sort(input.begin(), input.end());
	sort(compare.begin(), compare.end());
	for(int i = 0; i < input.length(); i++){
		if(input[i] != compare[i] && compare[i] != '*'){
			cout << 'N';
			return 0;
		}
	}
	cout << 'A';
	return 0;
}
