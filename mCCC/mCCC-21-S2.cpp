#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.length();
	int dp[100000];
	if(s.length() < 2)
		return 1;
	dp[0] = 1;
	bool repeat = false;
	for(int i = 1; i < n; i++){
		dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(!repeat && s[i] == s[j]){
				repeat = true;
				dp[i] = dp[j] +1;
			}
			if(s[i] != s[j])
				dp[i] = dp[j] +1;
		}
	}
	cout << pow(2,*max_element(dp, dp+n));
	return 0;
}
