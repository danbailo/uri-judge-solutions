#include <iostream>
#include <math.h>

using namespace std;

bool verifyPrime(int number){
	if(number == 0 or number == 1)
		return false;
	bool isPrime = true;
	for(int i = 2; i <= sqrt(number); i++){
		if(number % i == 0){
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

int main(){
	int n_test;

	while(cin >> n_test){
		bool isPrime = false, superPrime = false, temp = false;
		isPrime = verifyPrime(n_test);
		if(isPrime){
			superPrime = true;
			while (n_test != 0){	
				temp = verifyPrime(n_test%10);
				n_test /= 10;
				if(!temp)
					superPrime = false;
			}
		}
		if(superPrime)
			cout << "Super" << endl;
		else if(isPrime)
			cout << "Primo" << endl;
		else
			cout << "Nada" << endl;

	}	

	return 0;
}