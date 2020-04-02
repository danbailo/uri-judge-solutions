#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n_test, number;
	bool isPrime;
	cin >> n_test;

	while(n_test--){
		cin >> number;
		isPrime = true;
		for(int i = 2; i < sqrt(number); i++){
			if(number % i == 0){
				isPrime = false;
				break;
			}
		}
		if(isPrime)
			cout << "Prime" << endl;
		else
			cout << "Not Prime" << endl;
	}

	return 0;
}