#include "Rectangle.h"

int main(){
	// instantiate a rectangle statically
	Rectangle r("Static Rectangle");

	// Call class functions
	r.SetDimensions(2.2, 3.3);
	std::cout << "Area of static rectangle: " << r.GetArea() << '\n';

	// Exit
	return 0;

	// Note: Implicit invocation of the destructor, when variable r disappears. ( runs out of its scope)
}
