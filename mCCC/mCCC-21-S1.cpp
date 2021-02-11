#include <bits/stdc++.h>

using namespace std;

int main(){
	string l, s;
	cin >> l >> s;
	vector<string> output;
	for(int i = 0; i < s.length(); i++){
		for(int j = 0; j < l.length(); j++){
			string a=s, r=s, c=s;
			a.insert(i, 1, l[j]);
			output.push_back(a);
			if(l[j] == s[i]){
				r.erase(i, 1);
				output.push_back(r);
			}
			else if(l[j] != s[i]){
				c[i]=l[j];
				output.push_back(c);
			}
			if(i == s.length()-1){
				a=s;
				a += l[j];
				output.push_back(a);
			}
		}
	}
	sort(output.begin(), output.end());
	int n = output.size();
	cout << output[0] << "\n";
	for(int i = 0; i < n; i++){
		if(i > 0 && output[i] != output[i-1])
			cout << output[i] << "\n";
	}
	return 0;
}

