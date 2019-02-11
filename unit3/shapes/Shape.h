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

	// Return area of the shape. The '=0' suffix indicates that this is a pure virtual
	// function. This makes 'Shape' an abstract class,
	// which means that:
	//
	// 1. Class 'Shape cannot be instantiated
	//
	virtual float GetArea() = 0;
};
#endif
