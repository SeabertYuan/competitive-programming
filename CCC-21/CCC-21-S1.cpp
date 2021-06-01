#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<double> height, width;
	for(int i = 0; i < n +1; i++){
		int h;
		cin >> h;
		height.push_back(h);
	}
	for(int i = 0; i < n; i++){
		int w;
		cin >> w;
		width.push_back(w);
	}
	double a = 0;
	for(int i = 0; i < n; i++){
		double t = (abs(height[i] - height[i+1])*width[i])/2;
		a += width[i]*min(height[i], height[i+1]) + t;
	}
	cout << fixed;
	cout << setprecision(2);
	cout << a;
	return 0;
}
