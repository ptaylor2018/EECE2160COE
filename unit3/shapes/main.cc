#include "Rectangle.h"
#include "Circle.h"

int main(){
	Circle *c;
	Shape *s;

	// Steps
	// 1. Allocate memory
	// 2. Call to constructor Shape::Shape()
	// 3. Call to constructor Circle::Circle()
	c = new Circle("My circle", 10.0);

	// Due to polymorphism, this assignment is OK, b/c every field in
	// 's' is also present in 'c'.
	s = c;

	// This is not okay:
	// c = s;
	
        // Calls 'Circle::Print()' b/c 'Shape::Print()' is a virtual function
        // all 's' points to an instance of class 'Circle'.
        // If we omit 'virtual' from the declaration of 'Shape::Print()',
        // this invokes 'Shape::Print()' instead, because 's' is a pointer
        // of type 'Shape *'.
        s->Print();
	// Steps
	// 1. deconstructor of Circle is called: Circle::~Circle()
	// 2. deconstructor of Shape is called: Shape::~Shape()
	// 3. memory is freed
	delete c;
}
