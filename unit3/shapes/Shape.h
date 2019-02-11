#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
class Shape{
	std::string name;


public:
	Shape(std::string name);
	
	// Function 'Print()' is declared as a virtual function so that we can 
	// override its behavior in child classes.
	virtual void Print();
};
#endif
