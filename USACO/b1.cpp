#include <bits/stdc++.h>

using namespace std;
int getCowYear(string cow, vector<pair<string,int>> cows){
	int n = cows.size();
	for(int i = 0; i < n; i++){
		if(cows[i].first == cow){
			return cows[i].second;
		}
	}
	return 0;
}
int getOperation(string cow, vector<pair<string,int>> cowOp){
	int n = cowOp.size();
	for(int i = 0; i < n; i++){
		if(cowOp[i].first == cow){
			return cowOp[i].second;
		}
	}
	return 0;
}
int main(){
	int n;
	cin >> n;
	vector<vector<string>> in;
	vector<pair<string, int>> cows;
	vector<pair<string, int>> operations;
	operations.push_back(pair<string, int>("Bessie", 1));
	cows.push_back(pair<string, int>("Bessie", 1));
	string years[12] = {"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};
	for(int i = 0; i < n; i++){
		vector<string> a;
		for(int j = 0; j < 8; j++){
			string s;
			cin >> s;
			a.push_back(s);
		}
		in.push_back(a);
	}
	for(int i = 0; i < n; i++){
		int year;
		for(int j = 0; j < 12; j++){
				if(in[i][4] == years[j])
					year = j+1;
			}
		operations.push_back(pair<string,int>(in[i][0], year));
		if(in[i][3][0] == 'p'){
			if(abs(getOperation(in[i][7], operations))>=year){
				int x = getOperation(in[i][7], operations)-year;
				cows.push_back(pair<string,int>(in[i][0], x));
				//operations.push_back(pair<string,int>(in[i][0], year));
			}
			else if(abs(getOperation(in[i][7], operations))<=year){
				int x = year-abs(getOperation(in[i][7], operations))-12;
				cows.push_back(pair<string,int>(in[i][0], x));
				//operations.push_back(pair<string,int>(in[i][0], year));
			}
		}
		else{
			if(getOperation(in[i][7], operations) > year){
				int x = 12-getOperation(in[i][7], operations)+year;
				cows.push_back(pair<string,int>(in[i][0],x));
			}
			else{
				cows.push_back(pair<string,int>(in[i][0],getOperation(in[i][7], operations)+year));
			}
		}
	}
	/*for(int i = 0; i < cows.size(); i++)
		cout << cows[i].first << " " << cows[i].second << "\n";*/
	for(int i = 1; i < cows.size(); i++){
		if(i > 1)
			cows[i].second = cows[i].second+cows[i-1].second;
		if(cows[i].first == "Elsie"){
			cout << abs(cows[i].second);
			break;
		}
	}
	return 0;
}
