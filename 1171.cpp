#include <iostream>
#include <map>

using namespace std;

int main(){

	int n, key;
	cin >> n;
	map<int, int> numbers;

	for(int i=0; i < n; i++){
		cin >> key;
		if(!numbers[key]){
			numbers[key] = 0;
		}
		numbers[key] += 1;
	}

	for(auto& value: numbers){
		cout << value.first << " aparece " << value.second << " vez(es)\n";
	}

	return 0;
}