#include <iostream>

using namespace std;

int gcd(int a, int b){ 
	return (b == 0 ? a : gcd(b, a%b));
}

int main(){

	int n_test, n1, n2, mdc;

	cin >> n_test;

	while(n_test--){
		cin >> n1 >> n2;

		mdc = gcd(n1, n2);

		cout << mdc << endl;		
	}
	return 0;
}