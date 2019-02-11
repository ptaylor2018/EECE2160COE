#include <iostream>

void SwapInt(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	//read first value
	int a;
	std::cout << "Enter first value: ";
	std::cin >> a;
	//read second value
	int b;
	std::cout << "Enter second value: ";
	std::cin >> b;
	
	//swap em
	SwapInt(a,b);
	
	//print result
	std::cout << "The swapped values are: " << a << " " << b << '\n';
}
