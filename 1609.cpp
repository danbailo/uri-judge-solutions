#include <iostream>
#include <set>

using namespace std;

int main(){
	set<int> disctinct_ram;
	int n_test, n_ram, ram;

	cin >> n_test;

	for(int i = 0; i < n_test; i++){
		disctinct_ram.clear();
		cin >> n_ram;
		for(int j = 0; j < n_ram; j++){
			cin >> ram;
			disctinct_ram.insert(ram);
		}
		cout << disctinct_ram.size() << endl;
	}
	

	return 0;
}