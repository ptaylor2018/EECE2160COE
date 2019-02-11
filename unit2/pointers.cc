#include <iostream>

int main(){
	//we see the use of the pointer type modifier (*)
	//and the address-of operator
	int x = 10;
	int *p = &x;

	//print out the pointer
	std::cout << "Address of x: " << p << '\n';

	//print value pointed to by 'p', by using the dereference operator
	//for reading purposes
	std::cout << "value pointed to by p: " << *p << '\n';

	//assign a value to the memory pointed to by p by using the dereference
	//operator for writing purposes
	*p = 20;

	//print modified vallue of x
	std::cout << "value of x:" << x << '\n';
}
