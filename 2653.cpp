#include <iostream>
#include <set>

using namespace std;

int main(){

	set<string> distinct_jewels;
	int state;

	string jewel;

	while(cin >> jewel)
		distinct_jewels.insert(jewel);

	cout << distinct_jewels.size() << endl;
	

	return 0;
}