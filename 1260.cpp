#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;

int main(){

	int n;
	string tree;
	map<string, float> map_tree;
	bool first_occurrence = false;

	cin >> n;

	int t = 0;
	int state;
	float sum = 0;
	while(getline(cin, tree)){
		if(tree != ""){
			map_tree[tree] += 1;
		}
		else{	
			if(first_occurrence)		{
				for(map<string, float>::iterator it = map_tree.begin(); it != map_tree.end(); it ++){				
					sum += it->second;
				}
				if(sum != 0){
					for(auto &m: map_tree){
						printf("%s %.4f\n", m.first.c_str(), (m.second/sum)*100);
					}
				}			
				map_tree.clear();
				sum = 0;
				cout << endl;
			}
			first_occurrence = true;
		}		
	}
	
	for(map<string, float>::iterator it = map_tree.begin(); it != map_tree.end(); it ++){
		sum += it->second;
	}	

	for(auto &m: map_tree){
		printf("%s %.4f\n", m.first.c_str(), (m.second/sum)*100);
	}

	return 0;
}