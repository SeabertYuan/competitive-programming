#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;
	cin >> k;
	vector<int> nums;
	for(int i = 0; i < k; i++){
		int n;
		cin >> n;
		nums.push_back(n);
	}
	int pointer = 0;
	bool pointed = false;
	for(int i = k-1; i >= 0; i--){
		if(nums[i] == 0 && !pointed){
				pointer = i;
				pointed = true;
		}
		if(nums[i] != 0 && pointed){
			nums.erase(nums.begin()+i);
			pointed = false;
			pointer--;
			i = pointer;
		}
	}
	int sum = 0;
	for(int i: nums)
		sum += i;
	cout << sum;
	return 0;
}
