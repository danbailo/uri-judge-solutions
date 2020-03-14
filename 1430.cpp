#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){

	map<char, float> notes;
	string line;

	notes['W'] = (float) 1;
	notes['H'] = (float) 1 / (float) 2;
	notes['Q'] = (float) 1 / (float) 4;
	notes['E'] = (float) 1 / (float) 8;
	notes['S'] = (float) 1 / (float) 16;
	notes['T'] = (float) 1 / (float) 32;
	notes['X'] = (float) 1 / (float) 64;

	while(getline(cin, line)){
		float sum = 0;
		int count = 0;
		for(int i = 0; i < line.size(); i++){
			if(line[i] == '*') return 0;
			if(line[i] == '/'){
				if(sum == 1){
					count ++;
				}
				sum = 0;
			}
			else{
				sum += notes[line[i]];
			}			
		}
		cout << count << endl;
	}	

	return 0;
}