#include <iostream>

int main(){
	//read number of elements
	int n;
	std::cout << "Enter number of elements: ";
	std::cin >> n;
	
	//Allocate array of 'n' elements dynamically
	int *v = new int[n];
	
	//read elements
	for(int i = 0; i < n; i++){
		std::cout << "Enter element " << i << ": ";
		std::cin >> v[i];
	}

	//print elements
	for(int i = 0; i < n; i++){
		std::cout << "Element " << i << " is " << v[i] << '\n';
	}

	//free the array
	delete[] v;
}
