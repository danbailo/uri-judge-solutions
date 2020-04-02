#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;

int main(){

	int n, sum;
	string tree;
	map<string, double> map_tree;

	cin >> n;
	cin.ignore();
	getline(cin, tree); //linha em branco.
	int i = 0;
	sum = 0;
	while(i < n){
		i++;
		while (getline(cin, tree)){
			if(tree != ""){
				map_tree[tree] += 1;
				sum++;
			}
			else break;
		}
		for(auto &m: map_tree){
			printf("%s %.4f\n", m.first.c_str(), (m.second/sum) * 100);
		}
		map_tree.clear();
		sum = 0;
		if(i!=n) printf("\n");
	}
	return 0;
}