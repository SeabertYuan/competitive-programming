#include <bits/stdc++.h>

using namespace std;

bool sortByCol(const vector<double> &v1, const vector<double> &v2){
	return v1[0] < v2[0];
}
int main(){
	int n;
	vector<vector <double>> speeds;
	cin >> n;
	for(int i = 0; i < n; i++){
		double x, t;
		cin >> x >> t;
		speeds.push_back({x,t});
	}
	sort(speeds.begin(), speeds.end());
	double answer = 0;
	for(int i = 1; i < n; i++){
		double t = abs(speeds[i][0] - speeds[i-1][0]);
		double x = abs(speeds[i][1] - speeds[i-1][1]);
		answer = max(answer, abs(x/t));
	}
	cout << answer;
		
	return 0;
}
