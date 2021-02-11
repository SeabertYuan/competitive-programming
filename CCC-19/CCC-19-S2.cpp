#include <bits/stdc++.h>

using namespace std;
bool isPrime(int number){
	if(number == 0 || number == 1)
		return false;
	for(int i = 2; i <= sqrt(number); i++){ // <= sqrt(number) square root algorithm (prime numbers)
		if(number%i == 0)
			return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	vector<int> numbers;
	for(int i = 0; i < t; i++){
		int input;
		cin >> input;
		numbers.push_back(input);
	}
	for(int i = 0; i < t; i++){
		for(int j = 2; j<numbers[i]*2; j++){
			if(isPrime(j)){
				if(isPrime((numbers[i]*2)-j)){
					cout << j << " " << (numbers[i]*2)-j << "\n";
					break;
				}
			}
		}
	}
			
	return 0;
}
