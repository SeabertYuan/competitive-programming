//partials 9/15
#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> measurements;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		measurements.push_back(x);
	}
	sort(measurements.begin(), measurements.end());
	int point = n/2-1;
	vector<int> answer;
	for(int i = point+1; i < n; i++){
		answer.push_back(measurements[point]);
		answer.push_back(measurements[i]);
		point--;
	}
	for(int i = 0; i < n; i++){
		cout << answer[i] << " ";
	}
	return 0;
}
