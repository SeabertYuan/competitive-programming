#include <bits/stdc++.h>

using namespace std;
int main(){
	vector<vector<int>> flowers;
	int n;
		cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int measure;
			cin >> measure;
			flowers[i][j] = measure;
		}
	}
	int case = 0;
	for(int i = 1; i < n; i++){
		if(flowers[i][0] < flowers[i-1][0]){
			case = 1;
			break;
		}
	}
	for(int i = 1; i < n; i++){
		if(flowers[0][i] < flowers[0][i-1] && case == 1){
			case = 3;
			break;
		}
		else if(flowers[0][i] < flowers[0][i-1]{
			case = 2;
			break;
		}
	}
	switch(case):
	case 0{
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << flowers[i][j] << " ";
			cout << "\n";
		}
	}
	case 1{
		for(int i = 0; i < 
	return 0;
}
