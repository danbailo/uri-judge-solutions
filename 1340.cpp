#include <iostream>
#include <fstream>
#include <queue>
#include <stack>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){

	int n, op, x;
	int temp;
    int value;


    while(cin >> n){
		int is_queue = 1, is_stack = 1, is_pqueue = 1;
		queue<int> int_queue;
		stack<int> int_stack;
		priority_queue<int> int_priority_queue;

		for(int i = 0; i < n; i++){
			cin >> op >> x;
			if(op == 1){
				int_queue.push(x);
				int_stack.push(x);
				int_priority_queue.push(x);				
			}
			else if(op == 2){
				if(int_queue.front() == x){
					int_queue.pop();
				}
				else{
					is_queue = 0;
				}
				if(int_stack.top() == x){
					int_stack.pop();
				}
				else{
					is_stack = 0;
				}				
				if(int_priority_queue.top() == x){
					int_priority_queue.pop();
				}
				else{
					is_pqueue = 0;
				}				
			}		
		}
		if((is_stack == 1 && is_queue == 1) || (is_stack == 1 && is_pqueue == 1) || (is_queue == 1 && is_pqueue == 1)){
			cout << "not sure" << endl;
		}
		else if(is_queue == 1){
			cout << "queue" << endl;
		}
		else if(is_stack == 1){
			cout << "stack" << endl;
		}
		else if(is_pqueue == 1){
			cout << "priority queue" << endl;
		}		
		else{
			cout << "impossible" << endl;
		}
	}
	return 0;
}