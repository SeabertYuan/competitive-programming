#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> num;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		num.push_back(x);
	}
	if(n < 2)
		cout << 1;
	int dp[n];
	dp[0] = 1;
	for(int i = 1; i < n; i++){
		dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(num[j] < num[i] && dp[i] < dp[j]+1)
				dp[i] = dp[j]+1;
		}
	}
	cout << *max_element(dp, dp+n);
	return 0;
}

