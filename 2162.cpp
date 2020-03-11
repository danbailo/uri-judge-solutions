#include <iostream>
#include <climits>
#define inf INT_MAX

using namespace std;

int main(){
	
	int n, x, aux;
	aux = inf;
	bool state = true;
	cin >> n;

	while (n--){
		cin >> x;
		if(aux == x){
			state = false;
			break;
		}
		aux = x;
	}
	
	if(state){
		cout << 1 << endl;
	}
	else{
		cout << 0 << endl;
	}

	return 0;
}