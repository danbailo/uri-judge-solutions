#include <iostream>

using namespace std;

int main(){
	int n_test, number, count;
	cin >> n_test;

	while(n_test--){
		cin >> number;
		count = 0;
		for(int i = 1; i <= number; i++){
			if(number % i == 0)
				count++;
		}
		if(count == 2)
			cout << number << " eh primo" << endl;
		else
			cout << number << " nao eh primo" << endl;
	}

	return 0;
}