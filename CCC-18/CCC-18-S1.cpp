#include <bits/stdc++.h>

using namespace std;

int main(){
	cout << fixed;
	cout << setprecision(1);
	int n;
	cin >> n;
	vector<double> villages;
	for(int i = 0; i < n; i++){
		double village;
		cin >> village;
		villages.push_back(village);
	}
	sort(villages.begin(), villages.end());
	double answer = villages[n-1];
	for(int i = 1; i < n-1; i++){
		double n1;
		n1 = (villages[i] - villages[i-1]) / 2
			+ (villages[i+1] - villages[i]) /2;
		answer = min(answer, n1);
	}
	cout << answer;
	return 0;
}
