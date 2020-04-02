#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n_test, sum = 0, count = 0;
	bool isPrime;

	cin >> n_test;	

	while(count < 10){

		isPrime = true;
		for(int i = 2; i < sqrt(n_test); i++){
			if(n_test % i == 0){
				isPrime = false;
				break;
			}
		}
		if(isPrime){
			sum += n_test;
			count += 1;
		}

		n_test++;
	}

	cout << sum << " km/h"<< endl;
	cout << 60000000/sum << " h / " << ((60000000/sum)/24) << " d" << endl;

	return 0;
}