#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<pair<int,int>> input = {{1,2},{3,4}};
	string s;
	cin >> s;

	int slen = s.length();
	for(int i = 0; i < slen; i++){
		if(s[i] == 'H'){
			pair<int, int> temp = input[0];
			input[0] = input[1];
			input[1] = temp;
		}
		if(s[i] == 'V'){
			int temp = input[0].first;
			input[0].first = input[0].second;
			input[0].second = temp;

			temp = input[1].first;
			input[1].first = input[1].second;
			input[1].second = temp;
		}
	}
	cout << input[0].first << " " << input[0].second
		<< "\n" << input[1].first << " " << input[1].second;
	return 0;
}

