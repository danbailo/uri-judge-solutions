#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){

	int n_test, n_products, n_select;
	string name_product;
	float value, sum;
	map<string, float> products;

	cin >> n_test;

	for(int i = 0; i < n_test; i++){
		cin >> n_products;
		sum = 0;
		for(int j = 0; j < n_products; j++){
			cin >> name_product >> value;
			
			if(!products[name_product])
				products[name_product] = 0;
			
			products[name_product] = value;
		}

		cin >> n_select;

		for(int k = 0; k < n_select; k++){
			cin >> name_product >> value;
			sum += (products[name_product] * value);
		}
		printf("R$ %.2f\n", sum);
		products.clear();
	}

	return 0;
}