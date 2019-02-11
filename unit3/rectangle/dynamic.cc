#include "Rectangle.h"

int main(){
	// Dynamic instantiation
	//
	// 1. Allocate Dynamic Memory
	// 2. Invoke constructor
	Rectangle *pr = new Rectangle("Dynamic Rectangle");

	// Call class functions
	pr->SetDimensions(4.4, 5.5);
	std::cout << "Area of dynamic rectangle: " << pr->GetArea() << '\n';

	// 1. invoke destructor
	// 2. free memory allocated for that rectangle
	delete pr;

	// Done
	return 0;
}
