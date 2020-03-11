#include <iostream>
#include <vector>

using namespace std;

int main(){

	int n, t, x;
	vector<unsigned long long> fib;

	fib.push_back(0);
	fib.push_back(1);

	for(int i=2; i<61; i++)
		fib.push_back(fib.at(i-2) + fib.at(i-1));


	cin >> t;
	for(int j=0; j<t; j++){
		cin >> x;
		cout << "Fib(" << x << ") = " << fib.at(x) << endl;
	}

	return 0;
}