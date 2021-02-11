#include <bits/stdc++.h>

using namespace std;

int solve1(vector<int> &dmoj, vector<int> &peg, int &N){
	int answer = 0;
	sort(dmoj.begin(), dmoj.end());
	sort(peg.begin(), peg.end());
	for(int i = 0; i < N; i++){
		answer += max(dmoj[i], peg[i]);
	}
	return answer;
}
int solve2(vector<int> &dmoj, vector<int> &peg, int &N){
	int answer = 0;
	sort(dmoj.begin(), dmoj.end());
	sort(peg.begin(), peg.end(), greater<int>());
	for(int i = 0; i < N; i++){
		answer += max(dmoj[i], peg[i]);
	}
	return answer;
}

int main(){
	int in, citizen;
	vector<int> pop1, pop2;	
	cin >> in >> citizen;
	for(int i = 0; i < citizen; i++){
		int in3;
		cin >> in3;
		pop1.push_back(in3);
	}
	for(int i = 0; i < citizen; i++){
		int in4;
		cin >> in4;
		pop2.push_back(in4);
	}
	if(in == 1)
		cout << solve1(pop1, pop2, citizen);
	else
		cout << solve2(pop1, pop2, citizen);
	return 0;
}
